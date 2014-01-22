#!/bin/sh

# Compile it with 32 bits and get the assembly code
gcc -m32 -S sum.c

# Compile it with 32 bits and get the binary
gcc -m32 sum.c -o sum

