import os
import rclpy
from rclpy.node import Node
import rclpy.logging 
import csv
from mp_ros2_msg.msg import MediaPipeHumanHolisticList

class RightHandXLogger(Node):
    def __init__(self):
        super().__init__('hand_x_logger')
        self.sub = self.create_subscription(
            MediaPipeHumanHolisticList,
            '/mediapipe/human_holistic_list',
            self.callback,
            10
        )

        self.start_landmark = 5  # the index-finger's landmarks
        self.end_landmark = 8
        home_dir = os.path.expanduser("~")
        csv_path = os.path.join(home_dir, "Downloads", "right_hand_x_values.csv")
        self.csv_file = open(csv_path, mode='w', newline='') # w: writemode, newline: create new rows
        self.csv_writer = csv.writer(self.csv_file)

        header = []
        for i in range(self.start_landmark, self.end_landmark+1):
            header.extend([f"x{i}", f"y{i}", f"z{i}"])
        self.csv_writer.writerow(header)

    def callback(self, msg):
        try:
            points = msg.human_hand_list.right_hand_key_points
            data_row = []
            for i in range(self.start_landmark, self.end_landmark+1):
                p = points[i]
                data_row.extend([p.x, p.y, p.z])
            # self.get_logger().info(str(xs))
            self.csv_writer.writerow(data_row)
        except Exception as e:
            self.get_logger().error(f"Error extracting x values: {e}")
    
    def destroy_node(self):
        self.csv_file.close()
        super().destroy_node

def main(args=None):
    rclpy.init(args=args)
    node = RightHandXLogger()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
	main()