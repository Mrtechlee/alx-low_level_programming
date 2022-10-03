#!/bin/bash
gcc -c *.c
ar -rc libholberton.a *.o
ranlib libholberton.a
ar -t libholberton.a
nm lib_test.a
gcc main.c -L. -lholberton -o main
./main

