# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/04 20:53:02 by mochegri          #+#    #+#              #
#    Updated: 2020/02/14 16:55:01 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

AR = ar

NAME = libftprintf.a

flags = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		ft_printf_utilse_0.c \
		ft_printf_utilse_1.c \
		ft_printf_utilse_2.c \
		ft_printf_utilse_3.c \
		ft_printf_utilse_4.c \

all : $(NAME)

$(NAME):
	$(CC) $(flags) -c $(SRCS)
	$(AR) rc $(NAME) *.o
	ranlib $(NAME)
	rm *.o

bonus: re

clean: 
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all
