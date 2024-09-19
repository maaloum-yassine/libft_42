# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Mikefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 01:12:56 by ymaaloum          #+#    #+#              #
#    Updated: 2022/10/19 01:13:00 by ymaaloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_isprint.c \
	ft_putendl_fd.c \
	ft_strlcat.c \
	ft_substr.c \
	ft_atoi.c \
	ft_itoa.c \
	ft_putnbr_fd.c \
	ft_strlcpy.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_memchr.c \
	ft_putstr_fd.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_calloc.c \
	ft_memcmp.c \
	ft_split.c \
	ft_strmapi.c \
	ft_isalnum.c \
	ft_memcpy.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_isalpha.c \
	ft_memmove.c \
	ft_strdup.c \
	ft_strnstr.c \
	ft_isascii.c \
	ft_memset.c \
	ft_striteri.c \
	ft_strrchr.c \
	ft_isdigit.c \
	ft_putchar_fd.c \
	ft_strjoin.c \
	ft_strtrim.c \


OBJ = $(SRC:.c=.o)

all: $(NAME)
	@echo "done"

$(NAME):
	@CC $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"
re: fclean all
.PHONY:	clean all re fclean