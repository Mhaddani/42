/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:44:10 by danas             #+#    #+#             */
/*   Updated: 2019/11/20 15:26:25 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_place(char *buff, char *str, int k, int side)
{
	int i;
	int step;
	int j;

	i = 1;
	j = k;
	step = 0;
	while (buff[i - 1])
	{
		if (buff[i - 1] == '\n')
		{
			j = k;
			step = step + side + 1;
			if (step > (side * (1 + side)))
				return (1);
		}
		else
		{
			if ((str[j - 1 + step] != '.') && (buff[i - 1] != '.'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_all_place(char *buff, char *str, int i, int side)
{
	int k;

	k = i;
	while ((!check_place(buff, str, k + 1, side)))
	{
		if (k >= (side * (1 + side)))
			return (-1);
		k++;
	}
	return (k);
}

void	set_in_place(char *buff, char *str, int k, int side)
{
	int i;
	int step;
	int j;

	i = 1;
	j = k;
	step = 0;
	while (buff[i - 1])
	{
		if (buff[i - 1] == '\n')
		{
			j = k;
			step = step + side + 1;
		}
		else
		{
			if (buff[i - 1] != '.')
				str[j - 1 + step] = buff[i - 1];
			j++;
		}
		i++;
	}
}

char	get_val(t_list *list)
{
	int		i;
	char	*t;

	i = 0;
	t = list->content;
	while (t[i])
	{
		if ('Z' >= t[i] && t[i] >= 'A')
			break ;
		i++;
	}
	return (t[i]);
}

void	remove_tetri(char *str, char val)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == val)
		{
			str[i] = '.';
		}
		i++;
	}
}
