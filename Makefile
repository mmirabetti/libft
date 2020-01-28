#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 20:06:06 by mmirabet          #+#    #+#              #
#    Updated: 2020/01/28 17:09:21 by mmirabet         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= libft.a

SRCDIR		= .
LIBDIR		= .
INCDIR		= .

SRC			= ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
			  ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr \
			  ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum \
			  ft_isascii ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup \
			  ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi \
			  ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew \
			  ft_lstadd_front ft_lstsize ft_lstlast

SRCS		= $(addsuffix .c, ${SRC})
OBJS		= $(addsuffix .o, ${SRC})
#OBJS		= ${SRCS:.c=.o}

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra -g3

RM			= rm -f

AT			= @

.c.o:		
			${AT}${CC} ${CFLAGS} -I $(INCDIR) -c $(addprefix $(SRCDIR)/, $(SRCS))

all:		${NAME}

$(NAME):	${OBJS}		
			${AT}ar -rc ${NAME} ${OBJS}
			${AT}ranlib ${NAME}

clean:
			${RM} ${OBJS}
			${RM} *~

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

print-%: ; @$(error $* is $($*) ($(value $*)) 
						(from $(origin $*)))
