# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 20:27:05 by ksticks           #+#    #+#              #
#    Updated: 2019/09/09 19:37:20 by ksticks          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = get_next_line
FLAGS = -Wall -Wextra -Werror
HEADER = ../libft/includes
SRC = main.c get_next_line.c
OPTION = #-I $(HEADER)
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -I $(HEADER) -o get_next_line.o -c get_next_line.c
	$(CC) $(FLAGS) -I $(HEADER) -o main.o -c main.c
	$(CC) -o test_gnl main.o get_next_line.o -I $(HEADER) -L libft/ -lft

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean all
