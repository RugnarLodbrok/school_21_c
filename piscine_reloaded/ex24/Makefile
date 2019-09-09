# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 17:30:41 by ksticks           #+#    #+#              #
#    Updated: 2019/09/05 17:44:31 by ksticks          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
			srcs/ft_swap.c
OPTION = -I $(HEADER)
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

ALL : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(OPTION) -c $(SRC)
	ar rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean ALL
