from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )
    task3_1=Node(
        package='module_2_assignment',
        executable='back_and_forth_node',
        name='back_and_forth',
        )
    task3_2=Node(
        package='module_2_assignment',
        executable='back_and_forth_node',
        name='back_and_forth',
        parameters=[{"cmd_vel_topic": "/turtle3/cmd_vel"}])
    task3_3=Node(
        package='module_2_assignment',
        executable='back_and_forth_node',
        name='back_and_forth',
        parameters=[{"cmd_vel_topic": "/turtle4/cmd_vel"}])
    
    spawn2=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 1, y: 10, name: 'turtle2'}\""],
        name='spawn_turtle2',
        shell=True
    )
    spawn3=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 3.0, y: 8.0, name: 'turtle3'}\""],
        name='spawn_turtle3',
        shell=True
    )
    spawn4=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 7.0, y: 4.0, name: 'turtle4'}\""],
        name='spawn_turtle4',
        shell=True
    )
    spawn5=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 9.0, y: 2.0, name: 'turtle5'}\""],
        name='spawn_turtle5',
        shell=True
    )

    return LaunchDescription([
        turtlesim,
        spawn2,
        spawn3,
        spawn4,
        spawn5,
        task3_1,
        task3_2,
        task3_3
    ])
