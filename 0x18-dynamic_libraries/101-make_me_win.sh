#!/bin/bash
wget -P /tmp https://github.com/Aarontamirat/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
