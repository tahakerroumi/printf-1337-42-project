# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 21:34:16 by tkerroum          #+#    #+#              #
#    Updated: 2023/12/06 21:36:30 by tkerroum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
src = ft_printp.c ft_printf.c ft_putchar.c ft_putstr.c\

obj = $(SRC:.c=.o)

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
