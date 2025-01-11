# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: riyano <riyano@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/28 17:44:10 by riyano            #+#    #+#              #
#    Updated: 2024/12/28 18:06:16 by riyano           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_print_char.c ft_print_str.c ft_print_decimal.c \
	   ft_print_hex.c ft_print_unsigned.c ft_print_pointer.c ft_putnbr_base.c \
	   ft_utoa.c ./libft/ft_putchar_fd.c ./libft/ft_putstr_fd.c ./libft/ft_strlen.c \
	   ./libft/ft_itoa.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h ./libft/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
