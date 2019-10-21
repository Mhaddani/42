/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:43:22 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/21 13:11:37 by mhaddani         ###   ########.fr       */
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
	// i = 0;
	// while (i < 4)
	// {
	// 	j = 0;
	// 	while (j < tet_count)
	// 	{
	// 		int a;
	// 		a = tets_tab[i][j];
	// 		ft_putnbr(a);
	// 		write(1, "\n",1);
	// 		j++;
	// 	}
	// 	i++;
	// 	write(1, "\n",1);
	// }
	//tet_solve();
	return (1);
}
