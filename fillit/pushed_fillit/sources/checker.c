/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 23:36:13 by danas             #+#    #+#             */
/*   Updated: 2019/11/20 15:26:00 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		format_check(char *str)
{
	int i;

	i = 1;
	while (str[i - 1])
	{
		if (i != 21)
		{
			if (i % 5 != 0 && str[i - 1] != '.' && str[i - 1] != '#')
				return (0);
			if ((i % 5 == 0) && (str[i - 1] != '\n'))
				return (0);
		}
		else
		{
			if (str[i - 1] != '\n')
				return (0);
		}
		i++;
	}
	return (1);
}

int		check_nb_(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			j++;
		}
		i++;
	}
	if (j == 4)
		return (1);
	return (0);
}

int		connection(char *str)
{
	int block;
	int i;

	block = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if ((i + 1) < 20 && str[i + 1] == '#')
				block++;
			if ((i - 1) >= 0 && str[i - 1] == '#')
				block++;
			if ((i + 5) < 20 && str[i + 5] == '#')
				block++;
			if ((i - 5) >= 0 && str[i - 5] == '#')
				block++;
		}
		i++;
	}
	return (block == 6 || block == 8);
}

int		checker(char *str)
{
	if (connection(str) && check_nb_(str) && format_check(str))
		return (1);
	return (0);
}

int		check(char *str, int step)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		if (str[k] == '#')
			return (0);
		k = k + step;
		i++;
	}
	return (1);
}
