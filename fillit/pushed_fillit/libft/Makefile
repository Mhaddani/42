# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danas <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 22:46:00 by danas             #+#    #+#              #
#    Updated: 2019/04/16 23:26:05 by danas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

$(NAME):
	gcc -Wall -Werror -Wextra -c *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
