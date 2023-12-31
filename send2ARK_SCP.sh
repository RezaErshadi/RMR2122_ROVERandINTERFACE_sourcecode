#!/bin/bash

destinationUser=subzero
# destinationIP=192.168.30.113
destinationIP=192.168.1.10
sendRemote=$destinationUser@$destinationIP:/

M1Home=/media/psf/Home
OneDrivePath=$M1Home/OneDrive\ -\ bwedu
ROS2WS=$OneDrivePath/WorkTub/Devices/SubZero/Codes/PIO_CodeDevelopment/test/ros2_ws
SourceROS2=$ROS2WS/src

destinationROS2=home/subzero/ros2_ws/src

pkgName=subzero_v1 # subzero_v1 package
scp -r "$SourceROS2"/$pkgName/$pkgName $sendRemote$destinationROS2/$pkgName # copy subzero nodes folder
scp -r "$SourceROS2"/$pkgName/control $sendRemote$destinationROS2/$pkgName # copy control folder
scp -r "$SourceROS2"/$pkgName/launch $sendRemote$destinationROS2/$pkgName # copy launch folder
scp -r "$SourceROS2"/$pkgName/test $sendRemote$destinationROS2/$pkgName # copy test folder
scp "$SourceROS2"/$pkgName/package.xml $sendRemote$destinationROS2/$pkgName/package.xml # package.xml
scp "$SourceROS2"/$pkgName/setup.py $sendRemote$destinationROS2/$pkgName/setup.py # python.setup

scp "$SourceROS2"/$pkgName/$pkgName/ctl_run.py ${sendRemote}home/$destinationUser
scp "$SourceROS2"/$pkgName/$pkgName/ctl_kill.py ${sendRemote}home/$destinationUser

pkgName=interfaces_subzero # interfaces for subzero
scp -r "$SourceROS2"/$pkgName/msg $sendRemote$destinationROS2/$pkgName # messages
scp -r "$SourceROS2"/$pkgName/srv $sendRemote$destinationROS2/$pkgName # services
scp "$SourceROS2"/$pkgName/package.xml $sendRemote$destinationROS2/$pkgName/package.xml # package.xml
scp "$SourceROS2"/$pkgName/CMakeLists.txt $sendRemote$destinationROS2/$pkgName/CMakeLists.txt # setup.xml

# scp ~/run_restarts.sh ${sendRemote}home/$destinationUser
# scp ~/kill.sh ${sendRemote}home/$destinationUser
# scp ~/KillAllNodes.py ${sendRemote}home/$destinationUser

# scp -r $destinationUser@$destinationIP:/home/subzero/ros2lf/SubZero /home/reza/ros2lf

