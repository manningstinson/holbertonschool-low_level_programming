#!/bin/bash

# Compile the .c files to object files
gcc -c *.c

# Create the static library from the object files
ar -rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up the object files
rm *.o

