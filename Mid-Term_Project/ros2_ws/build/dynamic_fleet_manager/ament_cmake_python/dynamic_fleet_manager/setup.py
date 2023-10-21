from setuptools import find_packages
from setuptools import setup

setup(
    name='dynamic_fleet_manager',
    version='0.1.0',
    packages=find_packages(
        include=('dynamic_fleet_manager', 'dynamic_fleet_manager.*')),
)
