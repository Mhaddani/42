/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:43:22 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/21 09:55:57 by mhaddani         ###   ########.fr       */
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
	tet_count = 0;
	// *tets_tab = (char*)malloc(sizeof(char) * 15);
	// **tets_tab = (char)malloc(sizeof(char) * 5);
	// Test Tets on validation and count each iteration than store them for later use
	while ((rd = read(fd, buff, 21)) > 0)
	{
		buff[rd] = '\0';
		////////////////////////////// DEBUG BEGINING ////////////////////////
		// ft_putstr("---------- This is the content of the tets number : ");
		// ft_putnbr(++i);
		// write(1, "\n", 1);
		// int j = -1;
		// ft_putstr(&buff[0]);
		///////////////////////////////////END////////////////////////////////
		if ((iv = is_tet_valid(&buff[0], &tets_tab)) != -1 && tet_count <= 26)
		{
			tet_count++;	
		}
		else
			return (-1);
	}
	//tet_solve();
	return (0);
}
