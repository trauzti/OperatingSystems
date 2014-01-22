#!/bin/sh

# Compile it with 32 bits, executable stack and no stack canaries
gcc -m32 -z execstack -fno-stack-protector -o vuln vuln.c

