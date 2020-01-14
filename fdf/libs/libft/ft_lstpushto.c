/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushto.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 09:49:50 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/12 23:55:11 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstpushto(t_list **list, t_list *topush, size_t pos)
{
	t_list	*lst;
	size_t	i;

	lst = *list;
	if (topush)
	{
		i = 0;
		if (pos == 0)
		{
			ft_lstadd(list, topush);
			return (i);
		}
		while (i + 1 < pos && lst->next != NULL)
		{
			lst = lst->next;
			i++;
		}
		if (lst->next == NULL)
			ft_lstpush(list, topush);
		else
			ft_lstadd(&lst->next, topush);
		return (i + 1);
	}
	else
		return (-1);
}
