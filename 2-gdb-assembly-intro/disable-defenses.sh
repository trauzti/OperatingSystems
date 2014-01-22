#!/bin/sh

echo "To disable ASLR run: sudo echo 0 > /proc/sys/kernel/randomize_va_space"

gcc -m32 -z execstack -fno-stack-protector -o vuln vuln.c

echo "Read more about buffer overflows: http://insecure.org/stf/smashstack.html"
