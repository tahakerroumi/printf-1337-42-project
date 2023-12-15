# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 21:34:16 by tkerroum          #+#    #+#              #
#    Updated: 2023/12/14 20:29:44 by tkerroum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printp.c ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_printhex.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)

%o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar rc $(NAME) $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
