from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )
    task4=Node(
        package='module_2_assignment',
        executable='task4',
        name='task4',
        parameters=[{"linearx": 2.0}, {"lineary": 2.0}] # You can dynamically modify the Turtle's linear speed on both x and y axis here
    )
    return LaunchDescription([
        turtlesim,
        task4
    ])

    