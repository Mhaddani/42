/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:43:22 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/18 16:20:45 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*solve_fillit(char *av, int fd)
{
	int rd;
	int iv;
	char buff[22];
	int tet_count;
	char **tets_tab;

	tet_count = 0;
	// Test Tets on validation and count each iteration than store them for later use
	while ((rd = read(fd, buff, 21)) > 0)
	{
		buff[rd] = '\0';
		if ((iv = is_tet_valid(&buff, &tets_tab)) != -1 && tet_count <= 26)
		{
			tet_count++;
		
		}
		else
			return "error";
	}
	tet_solve();
}
