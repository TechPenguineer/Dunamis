#!/bin/bash

sudo apt install
sudo apt install git 
sudo apt install build-essential

clear
cd /usr/local/
sudo rm -rf Dunamis
sudo rm -rf /usr/local/duna
sudo git clone https://github.com/TechPenguineer/Dunamis.git
cd Dunamis 

sudo make clean
sudo make install