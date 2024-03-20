# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 18:07:38 by aaslan            #+#    #+#              #
#    Updated: 2024/03/20 05:26:05 by aaslan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
SRC		:= $(wildcard src/*.c)
OBJ		:= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
