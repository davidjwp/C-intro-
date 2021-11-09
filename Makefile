# Simplest Makefile

# Compilers and options
CC=gcc
CPPFLAGS=
CFLAGS= -Wall -Wextra -std=c99 -O3
LDFLAGS=
LDLIBS=

# Empty default rule
all:

# Cleaning rule
clean:
    rm -f *.o *~

# END
