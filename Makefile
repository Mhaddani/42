# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/12 07:22:54 by mhaddani          #+#    #+#              #
#    Updated: 2019/04/12 07:26:21 by mhaddani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAG = -Wextra -Werror -Wall
SRC = *.c
HEADER = *.h
FO = *.o
		
all :$(NAME)

$(NAME) :
	$(CC) $(FLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(FO)

clean : 
	rm -f $(FO)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

