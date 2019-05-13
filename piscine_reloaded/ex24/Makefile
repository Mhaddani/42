all :
	gcc -Wextra -Werror -Wall -c ./srcs/*.c -I ./includes/*.h
	ar -rc libft.a *.o

clean :
	rm -rf *.o

fclean : clean
	rm -rf *.a

re : fclean all