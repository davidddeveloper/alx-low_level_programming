#!/bin/bash
gcc -c -fpic *.c
gcc -shared 'liball.so' *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
