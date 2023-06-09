#!/bin/bash

# Compile but don't link all .c files in the current working dir (cwd)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *c
# Create a static library (Archive) from all .o files in the cwd with name liball.a
ar -rc liball.a *.o
# Index the order of the symbols/members in the library
ranlib liball.a
