#!/bin/bash
ls -1 *.c | grep -v 'main.c' | xargs gcc -c
ar -rc liball.a *.o
ranlib liball.a
