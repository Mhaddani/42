/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:44:40 by danas             #+#    #+#             */
/*   Updated: 2019/11/20 15:26:34 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			increase(char *str, int i, int j)
{
	int w;

	w = 0;
	while (check(str, i))
	{
		w++;
		str = str + j;
	}
	return (w);
}

int			decrease(char *str, int i, int j)
{
	int w;

	w = 3;
	while (check(str, i))
	{
		w--;
		str = str - j;
	}
	return (w);
}

t_size		*v(char *str)
{
	t_size *my_size;

	my_size = (t_size*)malloc(sizeof(t_size));
	my_size->x_min = increase(str, 1, 5);
	my_size->x_max = decrease(str + 15, 1, 5);
	my_size->y_min = increase(str, 5, 1);
	my_size->y_max = decrease(str + 3, 5, 1);
	return (my_size);
}

void		lettre(char *cnt, char a)
{
	int i;

	i = 0;
	while (cnt[i])
	{
		if (cnt[i] == '#')
			cnt[i] = a;
		i++;
	}
}

char		*string_resize(char *str, t_size *my_size, char a)
{
	int		i;
	int		j;
	char	*cnt;
	char	*temp;
	char	*tmp;

	i = 0;
	j = 0;
	cnt = ft_strnew(0);
	while (i < (my_size->x_max - my_size->x_min + 1))
	{
		temp = ft_strsub(str, my_size->y_min + j + my_size->x_min * 5, \
				my_size->y_max - my_size->y_min + 1);
		tmp = ft_strjoin(cnt, temp);
		ft_memdel((void **)&cnt);
		ft_memdel((void **)&temp);
		cnt = ft_strjoin(tmp, "\n");
		ft_memdel((void **)&tmp);
		i++;
		j = j + 5;
	}
	free(my_size);
	lettre(cnt, a);
	return (cnt);
}
