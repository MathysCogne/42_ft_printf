# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 17:25:50 by mcogne--          #+#    #+#              #
#    Updated: 2024/10/22 03:56:58 by mcogne--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS_DIR = srcs
OBJS_DIR = obj
INCLUDES_DIR = includes


SRC = $(addprefix $(SRCS_DIR)/, main.c ft_printf.c ft_putaddr.c ft_putchar_len.c ft_putnbr_len.c ft_putstr_len.c ft_putunbr_len_hex.c ft_utils.c )

BONUS_SRC = 

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./$(INCLUDES_DIR)

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#bonus: $(BONUS_OBJS)
#	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#so: $(OBJS)
#	$(CC) -fPIC $(CFLAGS) -c $(SRC)
#	$(CC) -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re
