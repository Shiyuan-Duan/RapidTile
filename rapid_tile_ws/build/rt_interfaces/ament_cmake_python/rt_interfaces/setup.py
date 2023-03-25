from setuptools import find_packages
from setuptools import setup

setup(
    name='rt_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('rt_interfaces', 'rt_interfaces.*')),
)
