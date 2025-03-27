# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egerin <egerin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 12:20:15 by egerin            #+#    #+#              #
#    Updated: 2025/03/12 13:18:55 by egerin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = libft
LIBFT_TARGET = ${LIBFT}/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -I${LIBFT} -g
LDFLAGS = -L${LIBFT} -lft
SRC_FILES = src/main.c src/errors.c src/stack_init.c src/push.c src/reverse_rotate.c src/rotate.c src/swap.c src/algo.c src/algo_init.c src/sort.c src/stack_utils.c
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
