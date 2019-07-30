# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aderby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 14:55:08 by aderby            #+#    #+#              #
#    Updated: 2019/07/30 10:36:21 by cimara           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = *.c

OBJ = *.o

all: $(NAME)

$(OBJ): $(FILES)
	gcc -Wall -Wextra -Werror -c $(FILES)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib libft.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
