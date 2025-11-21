import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import mediapipe as mp
from media_pipe_ros2_msg.msg import (HandPoint, MediaPipeHumanHand, MediaPipeHumanHandList)

mp_drawing = mp.solutions.drawing_utils
mp_hands = mp.solutions.hands

cap_topic = '/camera/camera/color/image_raw'  # <-- topic name for RealSense

class HandsPublisher(Node):
    def __init__(self):
        super().__init__('mediapipe_publisher')

        # Subscribing to RealSense image topic
        self.subscription = self.create_subscription(
            Image,
            cap_topic,
            self.getimage_callback,
            10
        )

        self.publisher_ = self.create_publisher(MediaPipeHumanHandList, '/mediapipe/human_hand_list', 10)

        self.bridge = CvBridge()

        self.mp_hands = mp.solutions.hands
        self.hands = self.mp_hands.Hands(
            static_image_mode=False,
            min_detection_confidence=0.7,
            min_tracking_confidence=0.7,
            max_num_hands=2
        )

        self.mp_drawing = mp.solutions.drawing_utils

    def getimage_callback(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

        results = self.hands.process(rgb_frame)

        mediapipehumanlist = MediaPipeHumanHandList()
        mediapipehuman = MediaPipeHumanHand()

        if results.multi_hand_landmarks and results.multi_handedness:
            hand_number_screen = 0
            for hand_landmarks, handedness in zip(results.multi_hand_landmarks, results.multi_handedness):
                self.mp_drawing.draw_landmarks(frame, hand_landmarks, self.mp_hands.HAND_CONNECTIONS)

                index_point = 0
                if handedness.classification[0].label == "Right":
                    for point in mp_hands.HandLandmark:
                        normalizedLandmark = hand_landmarks.landmark[point]
                        mediapipehuman.right_hand_key_points[index_point].name = str(point)
                        mediapipehuman.right_hand_key_points[index_point].x = normalizedLandmark.x
                        mediapipehuman.right_hand_key_points[index_point].y = normalizedLandmark.y
                        mediapipehuman.right_hand_key_points[index_point].z = normalizedLandmark.z
                        if hand_number_screen == 0:
                            mediapipehuman.left_hand_key_points[index_point].name = str(point)
                            mediapipehuman.left_hand_key_points[index_point].x = 0.0
                            mediapipehuman.left_hand_key_points[index_point].y = 0.0
                            mediapipehuman.left_hand_key_points[index_point].z = 0.0
                        index_point += 1
                    hand_number_screen += 1
                elif handedness.classification[0].label == "Left":
                    for point in mp_hands.HandLandmark:
                        normalizedLandmark = hand_landmarks.landmark[point]
                        mediapipehuman.left_hand_key_points[index_point].name = str(point)
                        mediapipehuman.left_hand_key_points[index_point].x = normalizedLandmark.x
                        mediapipehuman.left_hand_key_points[index_point].y = normalizedLandmark.y
                        mediapipehuman.left_hand_key_points[index_point].z = normalizedLandmark.z
                        if hand_number_screen == 0:
                            mediapipehuman.right_hand_key_points[index_point].name = str(point)
                            mediapipehuman.right_hand_key_points[index_point].x = 0.0
                            mediapipehuman.right_hand_key_points[index_point].y = 0.0
                            mediapipehuman.right_hand_key_points[index_point].z = 0.0
                        index_point += 1
                    hand_number_screen += 1

            mediapipehumanlist.human_hand_list.right_hand_key_points = mediapipehuman.right_hand_key_points
            mediapipehumanlist.human_hand_list.left_hand_key_points = mediapipehuman.left_hand_key_points
            mediapipehumanlist.num_humans = 1
            self.publisher_.publish(mediapipehumanlist)

        else:
            index_point = 0
            for point in mp_hands.HandLandmark:
                mediapipehuman.right_hand_key_points[index_point].name = str(point)
                mediapipehuman.right_hand_key_points[index_point].x = 0.0
                mediapipehuman.right_hand_key_points[index_point].y = 0.0
                mediapipehuman.right_hand_key_points[index_point].z = 0.0
                mediapipehuman.left_hand_key_points[index_point].name = str(point)
                mediapipehuman.left_hand_key_points[index_point].x = 0.0
                mediapipehuman.left_hand_key_points[index_point].y = 0.0
                mediapipehuman.left_hand_key_points[index_point].z = 0.0
                index_point += 1

            mediapipehumanlist.human_hand_list.right_hand_key_points = mediapipehuman.right_hand_key_points
            mediapipehumanlist.human_hand_list.left_hand_key_points = mediapipehuman.left_hand_key_points
            mediapipehumanlist.num_humans = 0
            self.publisher_.publish(mediapipehumanlist)

#        cv2.imshow('MediaPipe Hands', frame)
#        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    mediapipe_publisher = HandsPublisher()
    rclpy.spin(mediapipe_publisher)
    mediapipe_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

