#! /bin/bash

rm -rf *.o
gcc -c *.c
gcc -o atm *.o
./atm
rm -rf *.o
rm atm