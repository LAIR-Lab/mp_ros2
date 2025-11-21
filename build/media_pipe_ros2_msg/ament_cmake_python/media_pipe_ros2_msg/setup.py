from setuptools import find_packages
from setuptools import setup

setup(
    name='mpros2_msg',
    version='0.0.0',
    packages=find_packages(
        include=('mpros2_msg', 'mpros2_msg.*')),
)
