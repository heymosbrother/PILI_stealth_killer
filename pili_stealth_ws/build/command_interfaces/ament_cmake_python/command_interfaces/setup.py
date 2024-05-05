from setuptools import find_packages
from setuptools import setup

setup(
    name='command_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('command_interfaces', 'command_interfaces.*')),
)
