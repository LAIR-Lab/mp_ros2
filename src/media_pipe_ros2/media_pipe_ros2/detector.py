#!/home/lairlab-squirtle/venv/bin/python3

import os
# Logging and debugging
import rclpy.logging 
filename = os.path.basename(__file__)
logger = rclpy.logging.get_logger(f"{filename} logger")
logger.info(f"{logger.name} is working.")
import sys; logger.info(f"{filename} Python Executable: {sys.executable}")

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import mediapipe as mp
from media_pipe_ros2_msg.msg import HandPoint, MediaPipeHumanHand, MediaPipeHumanHolisticList
from mediapipe.python.solutions.pose import PoseLandmark
from mediapipe.framework.formats import landmark_pb2
from message_filters import ApproximateTimeSynchronizer, Subscriber

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
	PoseLandmark.RIGHT_FOOT_INDEX
]

class HolisticPublisher(Node):
	def __init__(self):
		super().__init__('mediapipe_publisher_holistic')
		
		# Declare parameters with placeholder default values
		self.declare_parameter('color_img_topic', 'placeholder')
		self.declare_parameter('depth_img_topic', 'placeholder')
		self.declare_parameter('pose_on', True)
		self.declare_parameter('hands_on', True)
		self.declare_parameter('face_on', True)
		self.declare_parameter('open_window', True)
		
		# Get actual parameter value from launch file
		self.color_img_topic = self.get_parameter('color_img_topic').value
		self.depth_img_topic = self.get_parameter('depth_img_topic').value
		self.pose_on = self.get_parameter('pose_on').value
		self.hands_on = self.get_parameter('hands_on').value
		self.face_on = self.get_parameter('face_on').value
		self.open_window = self.get_parameter('open_window').value

		# Publishings
		self.publisher_ = self.create_publisher(
			MediaPipeHumanHolisticList,
			'/mediapipe/human_holistic_list',
			10)
		
		# Subscriptions
		self.color_sub = Subscriber(self, Image, self.color_img_topic)
		self.depth_sub = Subscriber(self, Image, self.depth_img_topic)
		self.bridge = CvBridge()
		
		self.drawing_spec = mp_drawing.DrawingSpec(thickness=1, circle_radius=1)
		self.ts = ApproximateTimeSynchronizer([self.color_sub, self.depth_sub], queue_size=10, slop=0.1) # queue_size: maximum number of messages to store per topic while trying to find matches. 10 is a good rule of thumb, but increase if dealing with latency. slop: tolerance between times in seconds. 0.1 is a good rule of thumb. Increase if timestamps are noisy or delayed.
		self.ts.registerCallback(self.image_callback)

		# Detection Confidence 
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
		color_image = self.bridge.imgmsg_to_cv2(color_msg, desired_encoding='bgr8') # converted from rgb8
		depth_image = self.bridge.imgmsg_to_cv2(depth_msg, desired_encoding='passthrough') # same as original, 16UC1
		color_image = cv2.flip(color_image, 1)  # mirror horizontally for cv
		height, width, _ = color_image.shape

		image_rgb = cv2.cvtColor(color_image, cv2.COLOR_BGR2RGB) # Make a copy in RGB for MediaPipe processing
		image_rgb.flags.writeable = False

		holistic_msg = MediaPipeHumanHolisticList()
		human_hand = MediaPipeHumanHand()

		# Face
		if self.face_on:
			results_face = self.face_mesh.process(image_rgb)
			if results_face.multi_face_landmarks:
				for i, lm in enumerate(results_face.multi_face_landmarks[0].landmark):
					holistic_msg.human_face_mesh_list[i].x = lm.x
					holistic_msg.human_face_mesh_list[i].y = lm.y
					holistic_msg.human_face_mesh_list[i].z = lm.z
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
					holistic_msg.human_pose_list[i].name = str(NAME_POSE[i])
					holistic_msg.human_pose_list[i].x = lm.x
					holistic_msg.human_pose_list[i].y = lm.y
					holistic_msg.human_pose_list[i].visibility = lm.visibility
				mp_drawing.draw_landmarks(
					color_image,
					results_pose.pose_landmarks,
					mp_pose.POSE_CONNECTIONS)

		# Hands
		if self.hands_on:
			results_hands = self.hands.process(image_rgb)
			if results_hands.multi_hand_landmarks:
				for hand_landmarks, handedness in zip(results_hands.multi_hand_landmarks,
													results_hands.multi_handedness):
					side = 'right_hand_key_points' if handedness.classification[0].label == "Right" else 'left_hand_key_points'
					for i, point in enumerate(mp_hands.HandLandmark):
						lm = hand_landmarks.landmark[point]
						self.normalize_absolutize(human_hand, lm, side, i, point, width, height, depth_image)

					mp_drawing.draw_landmarks(
						color_image, 
						hand_landmarks,
						mp_hands.HAND_CONNECTIONS)
			else:
				for i, point in enumerate(mp_hands.HandLandmark):
					for side in ['right_hand_key_points', 'left_hand_key_points']:
						getattr(human_hand, side)[i].name = str(point)
						getattr(human_hand, side)[i].x = 0.0
						getattr(human_hand, side)[i].y = 0.0
						getattr(human_hand, side)[i].z = 0.0

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

	def normalize_absolutize(self, feature, landmark, side, i, point, width, height, depth_image):
		# Convert normalized coordinates to pixel coordinates
		px = int((1.0 - landmark.x) * width) # flip it back on the horizontal
		py = int(landmark.y * height)

		# Normalize
		px = max(0, min(px,width - 1))
		py = max(0, min(py, height - 1))

		# Get absolute depths
		depth_mm = depth_image[py, px]
		depth_m = depth_mm / 1000

		# Get attributes
		getattr(feature, side)[i].name = str(point)
		getattr(feature, side)[i].x = landmark.x
		getattr(feature, side)[i].y = landmark.y
		getattr(feature, side)[i].z = depth_m

def main(args=None):
	rclpy.init(args=args)
	node = HolisticPublisher()
	try: # Exits with any error 
		rclpy.spin(node)
	except Exception as e:
		node.get_logger().error(f"Exception in spin: {e}")
	finally:
		node.destroy_node()
		rclpy.shutdown()

if __name__ == '__main__':
	main()
