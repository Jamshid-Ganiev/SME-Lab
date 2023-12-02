from setuptools import setup

package_name = 'battery_monitoring_12200335'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Jamshid Ganiev',
    maintainer_email='12200335@inha.edu',
    description='Battery monitoring script utilizing ROS (Robot Operating System) for a TurtleBot, subscribing to a custom battery state topic, and displaying voltage, percentage, estimated runtime, and charging status.',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'battery_monitoring_12200335 = battery_monitoring_12200335.battery_state_checker:main',
        ],
    },
)
