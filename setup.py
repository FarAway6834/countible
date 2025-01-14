from setuptools import setup, find_packages

setup(
    name='countible',
    version='0.0.1',
    description='`++x` and `--x` on Python',
    author='FarAway',
    author_email='faway6834@gmail.com',
    url='https://github.com/FarAway6834/countible',
    install_requires=['cffi', ],
    packages=find_packages(exclude=[]),
    keywords=['FarAway6834', 'FarAway', 'faway', 'countible', '++x', '--x', 'increase', 'decrease'],
    python_requires='>=3.0', # I don't sure ;)
    package_data={},
    zip_safe=False,
    classifiers=[
        'Programming Language :: Python :: 3.0',
        'Programming Language :: Python :: 3.1',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: 3.8',
        'Programming Language :: Python :: 3.9',
        'Programming Language :: Python :: 3.10',
        'Programming Language :: Python :: 3.11',
        'Programming Language :: Python :: 3.12',
        'Programming Language :: Python :: 3.13',
        'Programming Language :: Python :: 3.14'
    ],
)