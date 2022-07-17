# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 20:50:40 by jleslee           #+#    #+#              #
#    Updated: 2021/10/30 16:44:36 by jleslee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_atoi.c ft_itoa.c  ft_bzero.c ft_calloc.c ft_isalnum.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_split.c ft_isalpha.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strchr.c ft_strdup.c ft_tolower.c ft_toupper.c ft_strmapi.c \
ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c 

BONUS = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS			= $(SRCS:.c=.o)

BOBJS			= $(BONUS:.c=.o)

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

all:			${NAME}

clean:
				$(RM) $(OBJS) $(BOBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BOBJS)
				$(AR) $(NAME) $(OBJS) $(BOBJS)

.PHONY:			all clean fclean re
