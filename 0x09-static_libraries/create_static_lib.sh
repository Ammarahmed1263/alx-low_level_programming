#!/bin/bash
ar rc liball.a | gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
