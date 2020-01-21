#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 20:06:06 by mmirabet          #+#    #+#              #
#    Updated: 2020/01/21 08:46:26 by mmirabet         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= libft.a

SRCDIR		= .
LIBDIR		= .
INCDIR		= .

SRC			= ft_memset

SRCS		= $(addsuffix .c, ${SRC})
OBJS		= ${SRCS:.c=.o}

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra -g3

RM			= rm -f

AT			= @

.c.o:		
			${AT}${CC} ${CFLAGS} -I $(INCDIR) -c $(addprefix $(SRCDIR)/, $(SRCS)) -o ${<:.c=.o}

${NAME}:	${OBJS}		
			${AT}ar -rc ${NAME} ${OBJS}
			${AT}ranlib ${NAME}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re

print-%: ; @$(error $* is $($*) ($(value $*)) 
						(from $(origin $*)))
