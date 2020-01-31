# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/17 05:26:56 by nmahboub          #+#    #+#              #
#    Updated: 2020/01/22 20:37:17 by nmahboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fdf
FLAGS= -Wall -Wextra -Werror 
OBJ= sources/bresenham.o sources/checker.o sources/hooks.o sources/init.o main.o sources/store.o
INC= headers/fdf.h

all : $(NAME)

%.o : %.c $(INC)
	@gcc -c $(FLAGS) -o $@ $<

$(NAME) : $(OBJ)
	@make -C libft/
	@gcc -o $@ $^ -lmlx -framework OpenGL -framework AppKit\
		-I $(INC) libft/libft.a
	@make clean
	@printf "\033[0;32m"
	@printf "DONE COMPILING"

clean :
	@rm -rf $(OBJ) && make -C libft/ clean

fclean : clean
	@rm -f $(NAME) && make -C libft/ fclean
	@printf "\033[0;32m"
	@printf "DONE CLEANING\n"
	@printf "\033[0m"

re : fclean all
