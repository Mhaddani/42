/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 12:34:47 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/14 12:18:48 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

int		*check(int *dms, char *line, char **tab)
{
	while (get_next_line(dms[2], &line))	
	{
		dms[3] = 0;
		tab = ft_strsplit(line, ' ');
		while (tab[dms[3]])
			dms[3]++;
		if (dms[3] < dms[1])
		{
			ft_strdel(tab);
			return (NULL);
		}
		dms[0]++;
	}
	return (dms);
}

int		*checker(char *av)
{
	char	*line;
	int		*dms;
	char	**tab;

	dms = (int*)malloc(sizeof(int) * 5);
	ft_memset(dms, 0, sizeof(int) * 5);
	dms[2] = open(av, O_RDONLY);
	if ((get_next_line(dms[2], &line) != -1))
	{
		dms[0]++;
		tab = ft_strsplit(line, ' ');
		while (tab[dms[3]++])
			dms[1]++;
		if (check(dms, line, tab) == NULL)
			return (NULL);
	}
	else
		return (NULL);
	close(dms[2]);
	return (dms);
}
