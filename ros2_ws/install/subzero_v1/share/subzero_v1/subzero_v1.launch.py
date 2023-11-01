from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    LogWriter = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    Radio = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    PingPongRadio = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    Arduino = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    WriteSpeed = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    ManualDrive = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    AutoDrive = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    ApRES = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    Garmin = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    Trimble = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    Telemetry = Node(
        package='subzero_v1',
        executable='LogWriter',
        respawn=True,
        respawn_delay=1
    )
    ld.add_action(LogWriter)
    ld.add_action(Radio)
    ld.add_action(PingPongRadio)
    ld.add_action(Arduino)
    ld.add_action(WriteSpeed)
    ld.add_action(ManualDrive)
    ld.add_action(AutoDrive)
    ld.add_action(ApRES)
    ld.add_action(Garmin)
    ld.add_action(Trimble)
    ld.add_action(Telemetry)
    return ld