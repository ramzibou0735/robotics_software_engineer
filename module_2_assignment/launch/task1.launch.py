from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )
    turtlesim2=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim2',
        remappings=[
                ('/turtle1/cmd_vel', '/turtle2/cmd_vel')]
    )
    task1_2=Node(
        package='module_2_assignment',
        executable='logarithmic_curve_node',
        name='logarithmic_curve',
        parameters=[{"cmd_vel_topic": "/turtle2/cmd_vel"}])



    task1_1=Node(
        package='module_2_assignment',
        executable='draw_circle_node',
        name='draw_circle',
        parameters=[{"radius": 2.0}] # Modify the radius value

    )
    return LaunchDescription([
        turtlesim,
        task1_1,
        turtlesim2,
        task1_2
    ])


