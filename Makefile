# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 17:25:50 by mcogne--          #+#    #+#              #
#    Updated: 2024/10/22 17:27:47 by mcogne--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS_DIR = srcs
OBJS_DIR = obj
INCLUDE = -I includes/


SRC = ft_printf.c ft_putlstr.c ft_putlnbr.c ft_putlunbr_base.c ft_putladdr_base.c ft_utils.c
SRCS = $(addprefix $(SRCS_DIR)/, $(SRC))
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.c=.o))

BONUS_SRC = 

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

#bonus: $(BONUS_OBJS)
#	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
