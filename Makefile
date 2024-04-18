# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 09:43:07 by pleander          #+#    #+#              #
#    Updated: 2024/04/18 15:41:06 by pleander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
CFILES := ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c 

OBJECTS := $(CFILES:.c=.o)
INCLUDE := libft.h

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE) 

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
