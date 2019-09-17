#!/bin/bash
rm -rf libft
mkdir libft
cp -f ../libft/* libft/
make -C libft/ fclean && make -C libft/
