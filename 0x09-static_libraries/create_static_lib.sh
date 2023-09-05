#!/bin/bash
gcc -Wall -Werror -Wetra -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
