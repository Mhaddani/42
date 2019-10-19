/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tet_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 06:45:37 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/19 23:20:54 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// typedef struct	hash_coord h_c;

// struct	hash_coord
// {
// 	int order;
// 	int x;
// 	int y;
// };

int	is_form_valid(char *buff, char **tets_tab)
{
	int	i;
	int	j;
	int	point;
	int	hash;
	int	t_count;

	i = 0;
	j = 0;
	t_count = 0;
	if (!(buff[4] == '\n' && buff[9] == '\n' && buff[14] == '\n' && buff[19] == '\n' && (buff[20] == '\n' || buff[20] == '\0')))
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

int	is_ph_valid(char *buff, char **tets_tab)
{
	int	i;
	int	j;
	int	point;
	int	hash;
	char *tmp;

	i = 0;
	point = 0;
	hash = 0;
	tmp = NULL;
	
	//tb[j][hash] = j;
	j++;
}

int	is_tet_valid(char **buff, char **tets_tab)
{
	int	**tab;
	
	if ((is_form_valid(buff, &tets_tab)) != -1)
	{

	}
}
