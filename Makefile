# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 15:54:54 by carys             #+#    #+#              #
#    Updated: 2021/12/13 13:56:02 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

HEADER	= ft_printf.h

SRCS	= ft_printf.c ft_put_c.c ft_put_s.c ft_put_d_i.c ft_put_p.c ft_put_u.c ft_put_x.c

OBJ	= ${SRCS:%.c=%.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I${HEADER}

RM		= rm -f

.PHONY:	all clean fclean re

all:	${NAME}

${NAME}:	${OBJ} ${HEADER}
	ar rcs ${NAME} $? 

%.o:	%.c ${HEADER} Makefile
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
