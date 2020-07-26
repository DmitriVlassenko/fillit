# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvlassen <dvlassen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/21 17:51:54 by dvlassen          #+#    #+#              #
#    Updated: 2020/07/21 17:55:43 by dvlassen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.c ft_validator.c libft/*.c

INC = libft.h fillit.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -I $(INC) fillit.h

clean:
	/bin/rm -f $(NAME)

re: clean all
