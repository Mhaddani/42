/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:16:13 by nmahboub          #+#    #+#             */
/*   Updated: 2020/01/23 00:53:52 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

int		errors(int error)
{
	if (error == 1)
		ft_putendl("FOUND WRONG LINE LENGTH. EXITING.");
	else if (error == 2)
		ft_putendl("IS NOT A FILE.");
	else
		ft_putendl("NO SUCH FILE.");
	return (-1);
}

int		tablen(char **tab)
{
	int		i;

	i = 0;
	while (tab && tab[i] != NULL)
		i++;
	return (i);
}

void	free_tab(char ***leak)
{
	int		i;
	char	**tab;

	i = -1;
	tab = *leak;
	while (tab && tab[++i] != NULL)
		ft_strdel(&tab[i]);
	free(*leak);
}

int		check(int fd, int *map_line)
{
	char	*line;
	char	**tab;
	int		min;
	int		ret;

	ret = get_next_line(fd, &line);
	tab = ft_strsplit(line, ' ');
	ft_strdel(&line);
	min = tablen(tab);
	free_tab(&tab);
	*map_line = 1;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		*map_line += 1;
		tab = ft_strsplit(line, ' ');
		ft_strdel(&line);
		if (tablen(tab) < min)
		{
			free_tab(&tab);
			return (errors(1));
		}
		free_tab(&tab);
	}
	return (ret == -1 ? errors(2) : min);
}
