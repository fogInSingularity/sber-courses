#!/bin/bash

gcc -std=c23 main.c log.c -o log_check -Wall -Wextra -fsanitize=address,undefined -g3 -ggdb
gcc -std=c23 main.c log.c -o log_rel -Wall -Wextra
