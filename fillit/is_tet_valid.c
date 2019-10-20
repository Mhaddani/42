/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tet_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 06:45:37 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/19 23:44:35 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	is_form_valid(char *buff, char **tets_tab)
{
	int	i;
	static int	j;
	int	point;
	int	hash;
	int	t_count;

	i = 0;
	j = 0;
	t_count = 0;
	if (!(buff[4] == '\n' && buff[9] == '\n' && buff[14] ==\
	'\n' && buff[19] == '\n' && (buff[20] == '\n' || buff[20] == '\0')))
		return (-1);
	while (buff[i])
	{
		point += (buff[i] == '.' ? 1 : 0);
		if (buff[i] == '#')
		{
			tets_tab[j][hash] = i;
			t_count = is_touching(buff, i);
			hash++;
		}
		i++;
	}
	j++;
	if (!(point == 16 && hash == 4 && hash == t_count == 6))
		return (-1);
	return (1);
}

int	is_touching(char *buff, int pos)
{
	int	count;

	count = 0;
	if ((pos - 1) == '#')
		count++;
	if ((pos + 1) == '#')
		count++;
	if ((pos - 4) == '#')
		count++;
	if ((pos + 4) == '#')
		count++;
	return (count);
}

int	is_tet_valid(char **buff, char **tets_tab)
{
	int	**tab;

	if ((is_form_valid(buff, &tets_tab)) != -1)
		return (1);
}
