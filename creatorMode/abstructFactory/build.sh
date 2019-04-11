#########################################################################
# File Name: build.sh
# Author: ian
# mail: ian@taomee.com
# Created Time: Thu 11 Apr 2019 10:32:18 AM CST
#########################################################################
#!/bin/bash

g++ -o client AbstractProductA.cpp AbstractProductB.cpp AbstractFactory.cpp main.cpp
