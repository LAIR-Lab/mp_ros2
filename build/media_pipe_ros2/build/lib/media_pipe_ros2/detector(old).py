# Logging and debugging
import os
import rclpy.logging 
filename = os.path.basename(__file__)
# Python Executable Debugging Loggers
# logger = rclpy.logging.get_logger(f"{filename} logger")
# logger.info(f"{logger.name} is working.")
# import sys; logger.info(f"{filename} Python Executable: {sys.executable}")

import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import mediapipe as mp
from media_pipe_ros2_msg.msg import HandPoint, MediaPipeHumanHand, MediaPipeHumanHolisticList
from mediapipe.python.solutions.pose import PoseLandmark
from mediapipe.framework.formats import landmark_pb2
from message_filters import ApproximateTimeSynchronizer, Subscriber
from sensor_msgs.msg import CameraInfo

# MediaPipe Definitions
mp_drawing = mp.solutions.drawing_utils
mp_holistic = mp.solutions.holistic
mp_hands = mp.solutions.hands
mp_pose = mp.solutions.pose
mp_face_mesh = mp.solutions.face_mesh
NAME_POSE = [
	PoseLandmark.NOSE, PoseLandmark.LEFT_EYE_INNER, PoseLandmark.LEFT_EYE, PoseLandmark.LEFT_EYE_OUTER,
	PoseLandmark.RIGHT_EYE_INNER, PoseLandmark.RIGHT_EYE, PoseLandmark.RIGHT_EYE_OUTER, PoseLandmark.LEFT_EAR,
	PoseLandmark.RIGHT_EAR, PoseLandmark.MOUTH_LEFT, PoseLandmark.MOUTH_RIGHT, PoseLandmark.LEFT_SHOULDER,
	PoseLandmark.RIGHT_SHOULDER, PoseLandmark.LEFT_ELBOW, PoseLandmark.RIGHT_ELBOW, PoseLandmark.LEFT_WRIST,
	PoseLandmark.RIGHT_WRIST, PoseLandmark.LEFT_PINKY, PoseLandmark.RIGHT_PINKY, PoseLandmark.LEFT_INDEX,
	PoseLandmark.RIGHT_INDEX, PoseLandmark.LEFT_THUMB, PoseLandmark.RIGHT_THUMB, PoseLandmark.LEFT_HIP,
	PoseLandmark.RIGHT_HIP, PoseLandmark.LEFT_KNEE, PoseLandmark.RIGHT_KNEE, PoseLandmark.LEFT_ANKLE,
	PoseLandmark.RIGHT_ANKLE, PoseLandmark.LEFT_HEEL, PoseLandmark.RIGHT_HEEL, PoseLandmark.LEFT_FOOT_INDEX,
	PoseLandmark.RIGHT_FOOT_INDEX]

class HolisticPublisher(Node):
	def __init__(self):
		super().__init__('mediapipe_publisher_holistic')
		
		# Declare parameters with placeholder default values
		self.declare_parameter('camera_ns', 'placeholder')
		self.declare_parameter('camera_info_intrinsics_rgb_topic', 'placeholder')
		self.declare_parameter('camera_info_intrinsics_depth_topic', 'placeholder')
		self.declare_parameter('camera_info_extrinsics_depth_topic', 'placeholder')
		self.declare_parameter('color_img_topic', 'placeholder')
		self.declare_parameter('depth_img_topic', 'placeholder')
		self.declare_parameter('pose_on', True)
		self.declare_parameter('hands_on', True)
		self.declare_parameter('face_on', True)
		self.declare_parameter('open_window', True)
		
		# Get actual parameter value from launch file
		self.camera_ns = self.get_parameter('camera_ns').value
		self.camera_info_intrinsics_rgb_topic = self.get_parameter('camera_info_intrinsics_rgb_topic').value
		self.get_logger().warn(f"DEBUG: {self.camera_info_intrinsics_rgb_topic}") # debug logger to check correct topic is being set
		self.camera_info_intrinsics_depth_topic = self.get_parameter('camera_info_intrinsics_depth_topic').value
		# self.get_logger().warn(f"DEBUG: {self.camera_info_intrinsics_depth_topic}") # debug logger to check correct topic is being set
		self.camera_info_extrinsics_depth_topic = self.get_parameter('camera_info_extrinsics_depth_topic').value
		# self.get_logger().warn(f"DEBUG: {self.camera_info_extrinsics_depth_topic}") # debug logger to check correct topic is being set
		self.color_img_topic = self.get_parameter('color_img_topic').value
		self.depth_img_topic = self.get_parameter('depth_img_topic').value
		self.pose_on = self.get_parameter('pose_on').value
		self.hands_on = self.get_parameter('hands_on').value
		self.face_on = self.get_parameter('face_on').value
		self.open_window = self.get_parameter('open_window').value

		# Other Attribute Declarations
		self.R = None
		self.T = None
		self.camera_info_intrinsics_rgb_ready = False
		self.camera_info_intrinsics_depth_ready = False
		self.camera_info_extrinsics_depth_ready = False

		# Publishings
		self.publisher_ = self.create_publisher(
			MediaPipeHumanHolisticList,
			'/mediapipe/human_holistic_list',
			10)
		# QoS OPTIONAL for subscribing to camera_info, instead of a default buffer value of 10
		# camera_info_intrinsics_rgb_topic_qos = QoSProfile( # this resolves a quality of service (QoS) mismatch with latched topic like camera_info_intrinsics_rgb_topic 
		# 	reliability = ReliabilityPolicy.RELIABLE,
		# 	history = HistoryPolicy.KEEP_LAST,
		# 	depth=10) 

		# Subscriptions
		self.camera_info_intrinsics_rgb_sub = self.create_subscription(
			CameraInfo, 
			self.camera_info_intrinsics_rgb_topic,
			self.camera_info_intrinsics_rgb_callback, 
			10)
		# self.get_logger().warn(f"DEBUG: Reaches camera_info_intrinsics_rgb_sub definition") # DL to ensure this line is reached
		# self.camera_info_intrinsics_depth_sub = self.create_subscription(
		# 	CameraInfo,
		# 	self.camera_info_intrinsics_depth_topic,
		# 	self.camera_info_intrinsics_depth_callback,
		# 	10)
		# self.camera_info_extrinsincs_depth_sub = self.create_subscription(
		# 	CameraInfo, 
		# 	self.camera_info_extrinsics_depth_topic,
		# 	self.camera_info_extrinsics_depth_callback, 
		# 	10)
		self.color_sub = Subscriber(self, Image, self.color_img_topic)
		self.depth_sub = Subscriber(self, Image, self.depth_img_topic)
		self.ts = ApproximateTimeSynchronizer( # Helps with syncing issues. 
			[self.color_sub, self.depth_sub],
			queue_size=10, # queue_size: maximum number of messages to store per topic while trying to find matches. 10 is a good rule of thumb, but increase if dealing with latency.
			slop=0.1) # slop: tolerance between times in seconds. 0.1 is a good rule of thumb. Increase if timestamps are noisy or delayed.
		self.ts.registerCallback(self.image_callback)
		self.bridge = CvBridge()
		self.drawing_spec = mp_drawing.DrawingSpec(thickness=1, circle_radius=1)

		# Detection Confidences
		if self.face_on:
			self.face_mesh = mp_face_mesh.FaceMesh(
				min_detection_confidence=0.5, 
				min_tracking_confidence=0.5)
		if self.hands_on:
			self.hands = mp_hands.Hands(
				static_image_mode=False, 
				min_detection_confidence=0.7, 
				min_tracking_confidence=0.7, 
				max_num_hands=2)
		if self.pose_on:
			self.pose = mp_pose.Pose(
				min_detection_confidence=0.5,
				min_tracking_confidence=0.5)

	def image_callback(self, color_msg, depth_msg):
		if not self.camera_info_intrinsics_rgb_ready:
			self.get_logger().warn("RGB camera intrinsics not yet available. Skipping Frame.")
			return
		# if not self.camera_info_intrinsics_depth_ready:
		# 	self.get_logger().warn("Depth camera intrinsics not yet available. Skipping Frame.")
		# 	return
		# if not self.camera_info_extrinsics_depth_ready:
			self.get_logger().warn("Camera extrinsics not yet available. Skipping Frame.")
			return

		color_image = self.bridge.imgmsg_to_cv2(color_msg, desired_encoding='bgr8') # converted from rgb8
		self.depth_image = self.bridge.imgmsg_to_cv2(depth_msg, desired_encoding='passthrough') # same as original, 16UC1
		color_image = cv2.flip(color_image, 1)  # mirror horizontally for cv
		self.rgb_height, self.rgb_width, _ = color_image.shape
		self.depth_height, self.depth_width, _ = self.depth_image.shape
		self.get_logger().info(f"RGB")

		image_rgb = cv2.cvtColor(color_image, cv2.COLOR_BGR2RGB) # Make a copy in RGB for MediaPipe processing
		image_rgb.flags.writeable = False

		holistic_msg = MediaPipeHumanHolisticList()
		human_face_mesh_list = holistic_msg.human_face_mesh_list
		human_hand = MediaPipeHumanHand()

		# Face
		if self.face_on:
			results_face = self.face_mesh.process(image_rgb)
			if results_face.multi_face_landmarks:
				for i, lm in enumerate(results_face.multi_face_landmarks[0].landmark):
					px, py = self.coord_to_px(lm)
					
					# depth_m = self.get_depth(px, py, human_face_mesh_list, lm, None, i, lm, depth_image)
					X, Y, Z = self.canonical_transform(px, py, depth_m)
					self.assign_xyz(human_face_mesh_list, None, i, X, Y, Z)

				mp_drawing.draw_landmarks(
					color_image,  # Drawing on BGR
					results_face.multi_face_landmarks[0],
					mp_face_mesh.FACEMESH_CONTOURS,
					self.drawing_spec,
					self.drawing_spec)

		# Pose
		if self.pose_on:
			results_pose = self.pose.process(image_rgb)
			if results_pose.pose_landmarks:
				for i, lm in enumerate(results_pose.pose_landmarks.landmark):
					px, py = self.coord_to_px(lm)
					depth_m = self.get_depth(px, py, holistic_msg.human_pose_list, lm, None, i, lm, depth_image)
					# self.get_logger().warn(f"depth_m: {depth_m}") # good
					X, Y, Z = self.canonical_transform(px, py, depth_m)
					# self.get_logger().warn(f"Z: {Z}") # good
					holistic_msg.human_pose_list[i].name = str(NAME_POSE[i])
					holistic_msg.human_pose_list[i].visibility = lm.visibility # confidence
					self.assign_xyz(holistic_msg.human_pose_list, None, i, X, Y, Z)
					
				mp_drawing.draw_landmarks(
					color_image,
					results_pose.pose_landmarks,
					mp_pose.POSE_CONNECTIONS)

		# Hands
		if self.hands_on:
			results_hands = self.hands.process(image_rgb)
			if results_hands.multi_hand_landmarks:
				for hand_landmarks, handedness in zip(results_hands.multi_hand_landmarks, results_hands.multi_handedness):
					side = 'right_hand_key_points' if handedness.classification[0].label == "Right" else 'left_hand_key_points'
					for i, point in enumerate(mp_hands.HandLandmark):
						lm = hand_landmarks.landmark[point]
						px, py = self.coord_to_px(lm)

						# depth_m = self.sample_depth(depth_image, px, py, i)
						depth_m = self.get_aligned_depth(px, py, human_hand, lm, side, i, point)
						X, Y, Z = self.canonical_transform(px, py, depth_m)
						self.assign_xyz(human_hand, side, i, X, Y, Z)

					mp_drawing.draw_landmarks(color_image, hand_landmarks, mp_hands.HAND_CONNECTIONS) # keeps untransformed 
			else:
				for i, point in enumerate(mp_hands.HandLandmark):
					for side in ['right_hand_key_points', 'left_hand_key_points']:
						getattr(human_hand, side)[i].name = str(point)
						self.assign_xyz(human_hand, side, i, 0.0, 0.0, 0.0)
			holistic_msg.human_hand_list.right_hand_key_points = human_hand.right_hand_key_points
			holistic_msg.human_hand_list.left_hand_key_points = human_hand.left_hand_key_points

		holistic_msg.num_humans = 1
		self.publisher_.publish(holistic_msg) # publish messages

		# Display
		if self.open_window:
			_logged_displaying = False # Initial value
			if not hasattr(self, "_logged_displaying"): # Log msg has not been logged yet
				self.get_logger().info("Displaying Image")
				self._logged_displaying = True
			cv2.imshow('MediaPipe Holistic', color_image)  # display BGR
		if cv2.waitKey(5) & 0xFF == 27:
			cv2.destroyAllWindows()

	def camera_info_intrinsics_rgb_callback(self, msg: CameraInfo):
		# .../<color or depth>/camera_info/k
		# k = [fx,	0, 	cx,
		# 		0, 	fy,	cy,
		# 		0,	0,	1]
		# f: focal length in pixels 
		# c: principal point aka optical center in pixels

		# DEBUGGING LOGGERS
		# self.get_logger().warn(f"DEBUG: msg = {msg}") # debug logger for checking msg from intended topic is properly subscribed to 

		if self.camera_info_intrinsics_rgb_ready: return
		cam_type = "rgb"
		# self.get_logger().warn(f"DEBUG: cam_type = {cam_type}") # Debugging logger
		self.camera_info = msg
		attrs = ['fx', 'fy', 'cx', 'cy']
		indices = [0, 4, 2, 5] # k-matrix entries

		for attr, idx in zip (attrs, indices):
			setattr(self, f"{attr}_{cam_type}", self.camera_info.k[idx]) # e.g. fx_rgb = k[0]
			self.get_logger().info(f"{attr}_{cam_type} = {self.camera_info.k[idx]}")
		self.camera_info_intrinsics_rgb_ready = True
		# self.get_logger().info(f"RGB camera intrinsics received...")
	
	# def camera_info_intrinsics_depth_callback(self, msg: CameraInfo):
	# 	# .../<color or depth>/camera_info/k
	# 	# k = [fx,	0, 	cx,
	# 	# 		0, 	fy,	cy,
	# 	# 		0,	0,	1]
	# 	# f: focal length in pixels 
	# 	# c: principal point aka optical center in pixels

	# 	# DEBUGGING LOGGERS
	# 	# self.get_logger().warn(f"DEBUG: msg = {msg}") # debug logger for checking msg from intended topic is properly subscribed to 
	# 	if self.camera_info_intrinsics_depth_ready: return
	# 	cam_type = "depth"
	# 	self.get_logger().warn(f"DEBUG: cam_type = {cam_type}")
	# 	self.camera_info = msg
	# 	attrs = ['fx', 'fy', 'cx', 'cy']
	# 	indices = [0, 4, 2, 5] # k-matrix entries

	# 	for attr, idx in zip (attrs, indices):
	# 		setattr(self, f"{attr}_{cam_type}", self.camera_info.k[idx]) # e.g. fx_depth = k[0]
	# 		self.get_logger().info(f"{attr}_{cam_type} = {self.camera_info.k[idx]}")
	# 	self.camera_info_intrinsics_depth_ready = True
	# 	self.get_logger().info(f"Depth camera intrinsics received...")

	# def camera_info_extrinsics_depth_callback(self, msg: CameraInfo):
	# 	if camera_info_extrinsics_depth_ready: return
	# 	cam_type = "depth"
	# 	self.camera_info = msg

	# 	self.R = self.depth_to_color_extrinsic.rotation 	# extrinsic rotation matrix
	# 	self.T = self.depth_to_color_extrinsic.translation 	# extrinsic translation vector
	# 	self.camera_info_extrinsics_depth_ready = True
	# 	self.get_logger().info(f"Camera extrinsics received...\n\
	# 		Rotation Matrix R:\n\
	# 		{self.R}\n\
	# 		Translation Matrix T:\n\
	# 		{self.T}")

	def coord_to_px(self, landmark):
		px = int(1.0 - landmark.x * self.rgb_width) # flip it back on the horizontal
		py = int(landmark.y * self.rgb_height)
		px = max(0, min(px, self.rgb_width - 1))
		py = max(0, min(py, self.rgb_height - 1))
		return px, py

	# def px_to_3dray(self, px_rgb, py_rgb): # get ray direction
	# 	x_ray = (px_rgb - self.cx) / self.fx
	# 	y_ray = (py_rgb - self.cy) / self.fy
	# 	ray_rgb = np.array([x_ray, y_ray, 1.0]) # 1.0 is a placeholder indicating z is somewhere along this parametrized xy line ray
	# 	ray_rgb /= np.linalg.norm(ray_rgb) # make it unit vector by dividing by norm

	# def rgb_to_depth(self, ray_rgb):
	# 	point_depth = self.R @ ray_rgb + self.T
	# 	px_depth = (point_depth[0] / point_depth[2]) * fx_depth + cx_depth
	# 	py_depth = (point_depth[1] / point_depth[2]) * fy_depth + cy_depth
	# 	Z = self.depth_image[int(py_depth), int(px_depth)]

	def get_aligned_depth(self, px, py, feature, landmark, hand_side, idx, point): # Convert coordinates to pixel coordinates
		# Get absolute depths
		depth_mm = self.depth_image[py, px]
		depth_m = depth_mm / 1000

		# Assign attributes
		target = getattr(feature, hand_side) if hand_side else feature
		if hand_side or hasattr(target[idx], 'name'):
			target[idx].name = str(point) # face points don't have a name like hands and pose
			self.assign_xyz(feature, hand_side, idx, landmark.x, landmark.y, depth_m)
		return depth_m

	def canonical_transform(self, px, py, z):
		X = (px - self.cx_rgb) * z / self.fx_rgb
		Y = (py - self.cy_rgb) * z / self.fy_rgb
		Z = z
		return X, Y, Z

	def assign_xyz(self, feature, hand_side, idx, x_val, y_val, z_val): # idx is passed from the enumerated for from each detector
		target = getattr(feature, hand_side) if hand_side else feature # if there is no hand_side (bc its used on pose or face), ignore hand_side
		target[idx].x = x_val
		target[idx].y = y_val
		target[idx].z = z_val
		# legacy debugging loggers. Used when it appeared assign_xyz was not properly assigning z value (error was ultimately in visualization.py, though)
		# self.get_logger().warn("Gets here") # good
		# self.get_logger().warn (f"target: {target}") # good
		# self.get_logger().warn(f"target[idx].z: {target[idx].z}") # good
		
def main(args=None):
	rclpy.init(args=args)
	node = HolisticPublisher()
	try: # Exits due to any error 
		rclpy.spin(node)
	except Exception as e:
		node.get_logger().error(f"Exception in spin: {e}")
	finally:
		node.destroy_node()
		rclpy.shutdown()

if __name__ == '__main__':
	main()
