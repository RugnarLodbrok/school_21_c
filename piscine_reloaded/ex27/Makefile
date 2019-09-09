# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 18:13:25 by ksticks           #+#    #+#              #
#    Updated: 2019/09/05 19:17:14 by ksticks          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes
SRC = main.c utility.c
OPTION = -I $(HEADER)
OBJ = main.o utility.o

ALL : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(OPTION) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
