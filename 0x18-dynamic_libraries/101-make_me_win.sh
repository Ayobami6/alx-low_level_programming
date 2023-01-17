#!/bin/bash
wget -P /tmp https://github.com/Ayobami6/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libprintf.so
export LD_PRELOAD=/tmp/libprintf.so
