# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/26 00:56:01 by mochegri          #+#    #+#              #
#    Updated: 2019/10/27 22:52:37 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

AR = ar

NAME = libft.a

flags = -Wall -Wextra -Werror

SRCS = ft_strrev.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_calloc.c \

BSRCS = ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstmap_bonus.c \

all : $(NAME)

$(NAME):
	$(CC) $(flags) -c $(SRCS)
	$(AR) rc $(NAME) *.o
	ranlib $(NAME)

bonus:
	$(CC) $(flags) -c $(BSRCS)
	$(AR) rc $(NAME) *.o
	ranlib $(NAME)

clean: 
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all
