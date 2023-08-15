#!/bin/bash

gcc -c *.c
ar rcs lib2.a *.o
gcc main2.c -L. lib2.a