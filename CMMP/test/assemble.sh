#!/bin/sh
FILE=$1
as "$FILE.c.s" -o "$FILE.c.o"
gcc "$FILE.c.o"
./a.out
