/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:44:25 by danas             #+#    #+#             */
/*   Updated: 2019/11/20 15:26:29 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		high_sqrt(int n)
{
	int size;

	size = 2;
	while (size * size < n)
		size++;
	return (size);
}

char	*squar_string(int side)
{
	char	*str;
	int		i;

	if (!(str = ft_strnew(side * (side - 1))))
		return (NULL);
	i = 1;
	while (i < (side * (side - 1)))
	{
		if (i % side == 0)
			str[i - 1] = '\n';
		else
			str[i - 1] = '.';
		i++;
	}
	return (str);
}

int		solve(t_list *lst, char *str, int i, int side)
{
	int k;

	if (lst == NULL)
		return (1);
	k = check_all_place(lst->content, str, i, side);
	if (k > -1)
	{
		set_in_place(lst->content, str, k + 1, side);
		if (solve(lst->next, str, 0, side) == 0)
		{
			remove_tetri(str, get_val(lst));
			return (solve(lst, str, k + 1, side));
		}
	}
	else
	{
		return (0);
	}
	return (1);
}

void	free_list(t_list *lst)
{
	char	*temp;
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst->next;
		temp = lst->content;
		ft_memdel((void **)&temp);
		free(lst);
		lst = tmp;
	}
}
