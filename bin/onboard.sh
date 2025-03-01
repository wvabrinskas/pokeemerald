#! /bin/bash


#git clone https://github.com/pret/agbcc

sudo apt update && sudo apt upgrade
sudo apt install build-essential binutils-arm-none-eabi git libpng-dev

cd agbcc
./build.sh
./install.sh ../