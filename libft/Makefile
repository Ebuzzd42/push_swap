# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egerin <egerin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 15:31:52 by egerin            #+#    #+#              #
#    Updated: 2025/01/09 16:31:01 by egerin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strncmp.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = ${SRC:.c=.o}
NAME = libft.a

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	   ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJBONUS = ${SRCBONUS:.c=.o}

bonus : $(OBJ) $(OBJBONUS)
	ar rcs $(NAME) $(OBJ) $(OBJBONUS)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ) $(OBJBONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean re all fclean bonus
