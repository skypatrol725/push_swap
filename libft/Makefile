# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 16:32:56 by cldavid           #+#    #+#              #
#    Updated: 2025/03/20 15:59:36 by cldavid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

LIBC = \
		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c


OBJS =	$(LIBC:.c=.o)

OBJSALL	= $(OBJS)

CFLAGS = -Wall -Wextra -Werror -I ./
CC = gcc

all: $(NAME)

$(NAME): $(OBJSALL)
	ar -rcs $(NAME) $(OBJSALL)

.c.o:
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(OBJSALL)

fclean:	 clean
		rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
