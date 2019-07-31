# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aderby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 14:55:08 by aderby            #+#    #+#              #
#    Updated: 2019/07/30 15:12:22 by cimara           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = *.c

OBJ = *.o

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ): $(FILES)
	gcc $(CFLAGS) -c $(FILES)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib libft.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: all
