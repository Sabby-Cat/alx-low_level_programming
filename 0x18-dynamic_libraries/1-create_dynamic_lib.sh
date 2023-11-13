#!/bin/bash
gcc -Wall -Werror -c -fPIC *.c
gcc -shared -o liball.so *.o
