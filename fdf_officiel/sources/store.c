/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:49:15 by nmahboub          #+#    #+#             */
/*   Updated: 2020/01/23 00:56:13 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

t_pixel	*lst_store(char **tab, int min, int map_line)
{
	t_pixel	*new_coord;
	int		i;

	if (!(new_coord = (t_pixel *)malloc(sizeof(t_pixel) * min)))
		return (NULL);
	i = -1;
	while (++i < min)
	{
		new_coord[i].x = i;
		new_coord[i].y = map_line;
		new_coord[i].z = ft_atoi(tab[i]);
	}
	return (new_coord);
}

int		lst_new(t_line **list, char **tab, int min, int map_line)
{
	t_line	*tmp;

	tmp = *list;
	if (*list == NULL)
	{
		if (!(*list = (t_line *)malloc(sizeof(t_line))))
			return (0);
		if (!((*list)->tab = lst_store(tab, min, map_line)))
			return (0);
		(*list)->next = NULL;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		if (!(tmp->next = (t_line *)malloc(sizeof(t_line))))
			return (0);
		if (!(tmp->next->tab = lst_store(tab, min, map_line)))
			return (0);
		tmp->next->next = NULL;
	}
	return (1);
}

t_line	*store(int fd, int min)
{
	char	*line;
	int		ret;
	char	**tab;
	t_line	*list;
	int		map_line;

	map_line = 0;
	list = NULL;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		tab = ft_strsplit(line, ' ');
		ft_strdel(&line);
		if (!lst_new(&list, tab, min, map_line))
			return (NULL);
		free_tab(&tab);
		map_line++;
	}
	return (list);
}
