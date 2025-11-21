import rclpy
from rclpy.node import Node
from visualization_msgs.msg import Marker, MarkerArray # RViz message types
from mp_ros2_msg.msg import MediaPipeHumanHolisticList

class LandmarkVisualizer(Node):
    def __init__(self):
        super().__init__('mediapipe_landmark_visualizer')

        self.subscription = self.create_subscription(
            MediaPipeHumanHolisticList,
            '/mediapipe/human_holistic_list', # subscribe to this topic
            self.callback,
            10)

        self.publisher = self.create_publisher(
            MarkerArray, # message that contains a list of Marker messages
            '/visualization_marker_array', # publish this topic 
            10)

    def callback(self, msg):
        marker_array = MarkerArray() # 
        marker_id = 0
        frame_id = 'camera_color_optical_frame' # this is the Global Options > Fixed Frame

        # Face
        for i, pt in enumerate(msg.human_face_mesh_list):
            marker_array.markers.append(self.make_marker(
                pt.x, 
                pt.y,
                pt.z, 
                marker_id,
                frame_id,
                (0.0, 1.0, 1.0), 
                'face')) # RGB -> cyan
            marker_id += 1
            
        # Pose
        for i, pt in enumerate(msg.human_pose_list):
            marker_array.markers.append(self.make_marker(
                pt.x,
                pt.y,
                pt.z,
                marker_id,
                frame_id,
                (1.0, 0.0, 0.0),
                'pose')) # RGB -> red
            marker_id += 1
            
        # Hands
        for hand_ns, hand in zip(['left_hand', 'right_hand'],
            [msg.human_hand_list.left_hand_key_points,
            msg.human_hand_list.right_hand_key_points]):
            for i, pt in enumerate(hand):
                if i % 4==0: color = (1.0, 1.0, 0.0) # if pt is finger tip change the color
                else: color = (0.0, 1.0, 0.0)
                marker_array.markers.append(self.make_marker(
                    pt.x,
                    pt.y,
                    pt.z,
                    marker_id,
                    frame_id,
                    color,
                    hand_ns)) # RGB -> green
                marker_id += 1

        self.publisher.publish(marker_array)

    def make_marker(self, x, y, z, marker_id, frame_id, color_rgb, ns):
        marker = Marker()
        marker.header.frame_id = frame_id # set frame id for marker
        marker.header.stamp = self.get_clock().now().to_msg() # set timestamp to current ROS time
        marker.ns = ns # namespace
        marker.id = marker_id # id

        marker.type = Marker.SPHERE # sphere marker type
        marker.action = Marker.ADD # add/update marker action 

        marker.pose.position.x = x # set marker pos x
        marker.pose.position.y = y 
        marker.pose.position.z = z
        scale = 0.005
        marker.scale.x = marker.scale.y = marker.scale.z = scale # set marker scale in axes
        marker.color.r = color_rgb[0] # set marker color channels
        marker.color.g = color_rgb[1]
        marker.color.b = color_rgb[2]
        marker.color.a = 1.0
        marker.lifetime.sec = 1 # marker lasts for this duration (seconds)
        return marker
    
def main(args=None):
    rclpy.init(args=args)
    node = LandmarkVisualizer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
