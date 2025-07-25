from setuptools import setup
import os
from glob import glob

package_name = 'media_pipe_ros2'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Dieisson Martinelli',
    maintainer_email='dmartinelli1997@gmail.com',
    description='Package responsible for using the media pipe in ros2',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'hands_detector = media_pipe_ros2.hands_detector:main',
            'pose_detector = media_pipe_ros2.pose_detector:main',
            'face_mesh_detector = media_pipe_ros2.face_mesh_detector:main',
            'holistic_detector = media_pipe_ros2.holistic_detector:main',

            # Note that these executabkesare located within subdirectories in media_pipe_ros2 and require path specification as shown.
            'hands_detector_rs = media_pipe_ros2.rs.hands_detector_rs:main',
            'pose_detector_rs = media_pipe_ros2.rs.pose_detector_rs:main',
            'face_mesh_detector_rs = media_pipe_ros2.rs.face_mesh_detector_rs:main',
            'holistic_detector_rs = media_pipe_ros2.rs.holistic_detector_rs:main',

            'visualization = media_pipe_ros2.visualization.visualization:main',
        ],
    },
)
