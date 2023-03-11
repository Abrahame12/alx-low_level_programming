#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libill.a *o
ranlib liball.a
