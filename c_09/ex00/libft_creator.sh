#!/bin/sh
cc -c -Wall -Wextra -Werror *.c
ar -rc libft.a *.o

