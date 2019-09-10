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
HEADER = ./includes
SRC = main.c get_next_line.c
OPTION = #-I $(HEADER)
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(OPTION) -c $(SRC)
	$(CC) -o $(NAME).out $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean all
