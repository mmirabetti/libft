# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 20:06:06 by mmirabet          #+#    #+#              #
#    Updated: 2020/02/10 19:17:28 by mmirabet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
NAME_SHARED	= libft.so

HEADER		= libft.h

SRCDIR		= .
LIBDIR		= .
INCDIR		= .

SRC			= ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
			  ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr \
			  ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum \
			  ft_isascii ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup \
			  ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi \
			  ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_isupper\
			  ft_islower ft_strcpy ft_isspace

SRC_BONUS		= ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
			  ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRCS			= $(addsuffix .c, $(SRC))
OBJS			= $(addsuffix .o, $(SRC))

SRCS_BONUS		= $(addsuffix .c, $(SRC_BONUS))
OBJS_BONUS 		= $(addsuffix .o, $(SRC_BONUS))

CC		= gcc

CFLAGS		= -Wall -Werror -Wextra -g3
LDFLAGS		= -L.
ARFLAGS		= rc

RM		= rm -f

AT		= @

.PHONY:		all clean fclean re

%.c%.o:		$(HEADER)
			$(AT)$(CC) $(CFLAGS) -I $(INCDIR) -c $(addprefix $(SRCDIR)/, $<)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(AT) $(AR) $(ARFLAGS) $@ $^
		$(AT)ranlib $@

bonus:		$(NAME) $(OBJS_BONUS)
		$(AT) $(AR) $(ARFLAGS) $^
		$(AT)ranlib $(NAME)

so:		$(NAME_SHARED)

$(NAME_SHARED):	CFLAGS += -fpic
$(NAME_SHARED):	LDFLAGS += -shared
$(NAME_SHARED):	$(OBJS) $(OBJS_BONUS)
		$(CC) $(LDFLAGS) $^ -o $@

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)
		$(RM) *~

fclean:		clean
		$(RM) $(NAME) $(NAME_SHARED)

re:		fclean all


print-%: ; @$(error $* is $($*) ($(value $*))
						(from $(origin $*)))
