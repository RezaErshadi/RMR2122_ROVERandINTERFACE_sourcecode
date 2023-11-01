from setuptools import setup
import os
from glob import glob

package_name = 'subzero_v1'
submodules = "subzero_v1/submodules"

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name,submodules],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='RezaErshadi',
    maintainer_email='mohammadreza.ershadi@uni-tuebingen.de',
    description='subzero control system',
    license='Nothing',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'Radio = subzero_v1.Radio:main',
            'Arduino = subzero_v1.Arduino:main',
            'Trimble = subzero_v1.Trimble:main',
            'Garmin = subzero_v1.Garmin:main',
            'ApRES = subzero_v1.ApRES:main',
            'ManualDrive = subzero_v1.ManualDrive:main',
            'AutoDrive = subzero_v1.AutoDrive:main',
            'Telemetry = subzero_v1.Telemetry:main',
            'WriteSpeed = subzero_v1.WriteSpeed:main',
            'LogWriter = subzero_v1.LogWriter:main',
            'PingPongRadio = subzero_v1.PingPongRadio:main'
        ],
    },
)
