#!/home/lairlab-squirtle/venv/bin/python3

import os
# Logging and debugging
import rclpy.logging 
filename = os.path.basename(__file__)
logger = rclpy.logging.get_logger(f"{filename} logger")
logger.info(f"{logger.name} is working.")
import sys; logger.info(f"{filename} Python Executable: {sys.executable}")

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
	# Declare launch arguments with default values. Explicit assignment like this allows for reuse across nodes.
	color_img_topic_arg = DeclareLaunchArgument(
		'color_img_topic', 
		default_value='/camera/camera/color/image_raw', # must be a .../color, because it is later encoded as bgr8 while .../depth is encoded as 16UC1
		description='Input color image topic to subscribe to')
	color_img_topic = LaunchConfiguration('color_img_topic')

	depth_img_topic_arg = DeclareLaunchArgument(
		'depth_img_topic',
		default_value='/camera/camera/aligned_depth_to_color/image_raw',
		description= 'Input aligned depth to color iamge topic to subscribe to')
	depth_img_topic = LaunchConfiguration('depth_img_topic')
		
	pose_on_arg = DeclareLaunchArgument(
		'pose_on',
		default_value='true',
		description='Include pose detection in holistic detector')
	pose_on = LaunchConfiguration('pose_on')
	
	face_on_arg = DeclareLaunchArgument(
		'face_on',
		default_value='true',
		description='Include face detection in holistic detector')
	face_on = LaunchConfiguration('face_on')
	
	hands_on_arg = DeclareLaunchArgument(
		'hands_on',
		default_value='true',
		description='Include hands detection in holistic detector')
	hands_on = LaunchConfiguration('hands_on')

	open_window_arg = DeclareLaunchArgument(
		'open_window',
		default_value='true',
		description='Open a graphical window of the image'
	)
	open_window = LaunchConfiguration('open_window')

	rs_pointcloud_arg = DeclareLaunchArgument(
		'rs_pointcloud',
		default_value='false',
		description='Publish RealSense pointcloud'
	)
	rs_pointcloud = LaunchConfiguration('rs_pointcloud')

	# Define nodes
		# RealSense
	realsense_launch = IncludeLaunchDescription(
		PythonLaunchDescriptionSource(
			os.path.join(
				get_package_share_directory('realsense2_camera'),
				'launch',
				'rs_launch.py')),
		launch_arguments=[
			('align_depth.enable', 'true')]) # Launches with .../aligned_depth_to_color/... topics

		# MediaPipe
	holistic_detector_rs = Node(
		package='media_pipe_ros2',
		executable='detector',
		name='detector',
		output='screen',
		parameters=[{
			'pose_on': pose_on,
			'hands_on': hands_on,
			'face_on': face_on,
			'color_img_topic': color_img_topic,
			'depth_img_topic': depth_img_topic,
			'open_window': open_window}])

		#RViz
	visualization = Node(
		package = 'media_pipe_ros2',
		executable = 'visualization',
		name = 'mediapipe_visualizer',
		output = 'screen')

	return LaunchDescription([
		# Arguments
		color_img_topic_arg,
		depth_img_topic_arg,
		pose_on_arg,
		face_on_arg,
		hands_on_arg,
		open_window_arg,
		rs_pointcloud_arg,

		# Log Messages
		LogInfo(msg=['Launching with color image topic: ', color_img_topic]),
		LogInfo(msg=['Launching with depth image topic: ', depth_img_topic]),
		LogInfo(msg=['Including RealSense launch file.']),
		LogInfo(msg=['Launching with pose_on: ', pose_on]),
		LogInfo(msg=['Launching with face_on: ', face_on]),
		LogInfo(msg=['Launching with hands_on: ', hands_on]),
		LogInfo(msg=['Launching with open_window: ', open_window]),

		# Nodes
		realsense_launch,
		holistic_detector_rs,
		visualization])
