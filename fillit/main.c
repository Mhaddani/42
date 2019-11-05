/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 06:08:07 by mhaddani          #+#    #+#             */
/*   Updated: 2019/11/04 18:58:10 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int ac, char **av)
{
	int fd;

	if(ac != 2)
		return(usage());
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_putendl("The file does not exist");
	else if ((solve_fillit(fd)) == -1)
		ft_putendl("error");
	return (0);
}

// int main(int ac, char **av)
// {
// 	char *c;
// 	int l;
// 	c = "14";
// 	c = &l;
// 	printf("%s\n", c);
// 	return 0;
// }