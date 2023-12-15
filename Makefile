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

NAME = ft_printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printp.c ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_printhex.c ft_printu.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)
 
$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
