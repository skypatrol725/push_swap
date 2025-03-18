# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 15:31:24 by cldavid           #+#    #+#              #
#    Updated: 2025/03/18 15:31:24 by cldavid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	gcc
RM		=	rm -f
FLAGS	=	-Wall -Wextra -Werror
LIBFTDIR=	libft/
OBJ_DIR	=	obj/
SRC_DIR	=	srcs

SRC_1	=	srcs/push_swap.c \
			srcs/ft_add_back.c \
			srcs/ft_check_args.c \
			srcs/ft_check_dup.c \
			srcs/ft_check_sorted.c \
			srcs/ft_check_utils.c \
			srcs/ft_error.c \
			srcs/ft_free.c \
			srcs/ft_list_args.c \
			srcs/ft_parse_quoted.c \
			srcs/ft_parse.c \
			srcs/ft_rot_push.c \
			srcs/ft_rotate_type.c \
			srcs/ft_sort_big.c \
			srcs/ft_sort_three.c \
			srcs/ft_stack_new.c \
			srcs/lst_utils.c \
			srcs/lst_utils_2.c \
			srcs/op_push.c \
			srcs/op_rev_rotate.c \
			srcs/op_rotate.c \
			srcs/op_swap.c \
			srcs/solver_utils_ab.c \
			srcs/solver_utils_ba.c \
			srcs/starting_blocks.c \


OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L ./libft -lft 

.c.o:
		${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJ_1} ${OBJ_2}
		make -C $(LIBFTDIR)
		${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
		${RM} ${OBJ_1} ${OBJ_2}
		@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
		${RM} ${NAME}
		@cd $(LIBFTDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re