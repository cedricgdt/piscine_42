# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdrai <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 20:36:01 by gdrai             #+#    #+#              #
#    Updated: 2018/08/18 20:41:53 by gdrai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-03

FLAGS = -c  -Wall -Wextra -Werror

SRC = ft_putchar.c main.c rush03.c

OBJET = ft_putchar.o main.o rush03.o

all: $(NAME)
$(NAME):
	gcc $(FLAGS) $(SRC)
	gcc $(OBJET) -o $(NAME)

clean:
	rm -f $(OBJET)

fclean: clean
	rm -f $(NAME)

re: fclean all
