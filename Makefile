#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 20:06:06 by mmirabet          #+#    #+#              #
#    Updated: 2020/01/22 17:32:11 by mmirabet         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= libft.a

SRCDIR		= .
LIBDIR		= .
INCDIR		= .

SRC			= ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
			  ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr \
			  ft_strnstr

SRCS		= $(addsuffix .c, ${SRC})
OBJS		= $(addsuffix .o, ${SRC})
#OBJS		= ${SRCS:.c=.o}

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra -g3

RM			= rm -f

AT			= @

.c.o:		
			${AT}${CC} ${CFLAGS} -I $(INCDIR) -c $(addprefix $(SRCDIR)/, $(SRCS))

${NAME}:	${OBJS}		
			${AT}ar -rc ${NAME} ${OBJS}
			${AT}ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

print-%: ; @$(error $* is $($*) ($(value $*)) 
						(from $(origin $*)))
