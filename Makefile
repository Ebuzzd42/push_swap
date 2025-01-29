# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egerin <egerin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 13:25:18 by egerin            #+#    #+#              #
#    Updated: 2025/01/29 15:08:21 by egerin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = libft
LIBFT_TARGET = ${LIBFT}/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I${LIBFT} -g
LDFLAGS = -L${LIBFT} -lft
SRC_FILES = src/main.c src/errors.c src/init_stack.c
SRC = $(SRC_FILES)
OBJ = $(SRC:.c=.o)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT_TARGET)
	@$(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) -o $(NAME)

all: $(NAME)

$(LIBFT_TARGET):
	@make --no-print-directory -C $(LIBFT)

clean:
	@make --no-print-directory clean -C ${LIBFT}
	@rm -f $(OBJ)

fclean: clean
	@make --no-print-directory fclean -C ${LIBFT}
	@rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re
