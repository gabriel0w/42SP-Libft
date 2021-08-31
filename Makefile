# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbelo-so <gbelo-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 17:27:02 by gbelo-so          #+#    #+#              #
#    Updated: 2021/08/26 17:57:46 by gbelo-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./teste.c \
	./teste2.c

OBJS = $(SRC:.c=.o)

NAME = libft.a

CFLAGS= -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re