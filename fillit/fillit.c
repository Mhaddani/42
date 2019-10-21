/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:43:22 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/21 12:49:19 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	solve_fillit(int fd)
{
	int rd;
	int iv;
	char buff[22];
	int tet_count;
	char **tets_tab;
	int i;

	i= 0;
	int j = 0;
	tet_count = 0;
	tets_tab = (char**)malloc(sizeof(char) * 27);
	while (i < 26)
	{
		tets_tab[i] = ft_strnew(5);
		i++;
	}
	//Test Tets on validation and count each iteration than store them for later use
	while ((rd = read(fd, buff, 21)) > 0)
	{
		buff[rd] = '\0';
		if ((iv = is_tet_valid(&buff[0], &tets_tab)) != -1 && tet_count <= 26)
		{
			tet_count++;
		}
		else
			return (-1);
	}
	i = 0;
	while (i <= 4)
	{
		int a = tets_tab[0][i];
		ft_putnbr(a);
		ft_putendl("");
		i++;
	}
	// int ii = ft_strlen(tets_tab[i]);
	// int jj = ft_strlen(tets_tab[i][j]);
	// ft_putendl(tets_tab[0]);
	// while (i < ii)
	// {
	// 	while (j < jj)
	// 		{
	// 			ft_putchar(tets_tab[i][j]);
	// 			j++;
	// 		}
	// 		i++;
	// }
	//tet_solve();
	return (1);
}
