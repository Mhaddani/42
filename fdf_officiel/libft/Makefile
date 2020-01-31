# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmahboub <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/16 18:13:45 by nmahboub          #+#    #+#              #
#    Updated: 2020/01/22 20:35:07 by nmahboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CF = ft_atoi.c ft_putchar.c ft_strchr.c ft_strjoin.c ft_strsplit.c ft_countword.c\
	 ft_putendl.c ft_strdel.c ft_strlen.c ft_strsub.c ft_memalloc.c ft_putstr.c\
	 ft_strdup.c ft_strnew.c ft_memdel.c ft_bzero.c get_next_line.c
IN = libft.h
OBJ = ft_atoi.o ft_putchar.o ft_strchr.o ft_strjoin.o ft_strsplit.o ft_countword.o\
	 ft_putendl.o ft_strdel.o ft_strlen.o ft_strsub.o ft_memalloc.o ft_putstr.o\
	 ft_strdup.o ft_strnew.o ft_memdel.o ft_bzero.o get_next_line.o

all : $(NAME)

$(NAME) : $(CF)
	@gcc -Wall -Wextra -Werror -c $(CF) -I $(IN)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
