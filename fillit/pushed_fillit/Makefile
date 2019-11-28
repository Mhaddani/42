# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danas <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/04 23:42:32 by danas             #+#    #+#              #
#    Updated: 2019/11/20 15:26:51 by danas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = sources/main.c\
	  sources/place.c\
	  sources/solver.c\
	  sources/tetriminos.c\
	  sources/checker.c

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(FLAG) $(SRC) libft/libft.a -o $(NAME)

clean:
	@make fclean -C libft

fclean: clean
	@rm -f $(NAME)

re: fclean all
