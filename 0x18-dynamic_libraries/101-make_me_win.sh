#!/bin/bash
wget -P /tmp https://github.com/Aarontamirat/alx-low_level_programming/tree/master/0x18-dynamic_libraries/librarytwo.so
export LD_PRELOAD=/tmp/librarytwo.so
