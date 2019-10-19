/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 06:08:07 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/19 14:51:49 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	usage()
{
	ft_putendl("usage : fillit source_file");
	return (0);
}

int main(int ac, char **av)
{
	int fd;

	if(ac != 2)
		return(usage());
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_putendl("The file does not exist");
	else
		solve_fillit(av[1], fd);
	return (0);
}
