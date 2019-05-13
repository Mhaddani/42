/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 05:01:30 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/30 05:01:31 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		++i;
	}
}

int		main(int argc, char *argv[])
{
	int		file_descriptor;
	int		buffer_receiver;
	char	buffer[BUFFER_SIZE + 1];

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc == 2)
	{
		file_descriptor = open(argv[1], O_RDONLY);
		if (file_descriptor == -1)
			write(1, "No file.\n", 9);
		else
		{
			while ((buffer_receiver = read(file_descriptor, buffer, \
			BUFFER_SIZE)))
			{
				buffer[buffer_receiver] = '\0';
				ft_putstr(buffer);
			}
		}
	}
	return (0);
}
