#!/bin/bash
wget -P ../ https://github.com/juanquinterodev/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=../libwin.so
