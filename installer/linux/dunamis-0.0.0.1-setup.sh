#!/bin/bash

sudo apt install
sudo apt install git 
sudo apt install build-essential

clear
cd /usr/local/

git clone https://github.com/TechPenguineer/Dunamis.git
cd Dunamis 
make clean
make install