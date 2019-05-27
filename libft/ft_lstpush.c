/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 05:32:37 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/27 04:50:51 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstpush(t_list **list, t_list *topush)
{
	t_list	*lst;
	size_t	i;

	i = 1;
	if (topush)
	{
		if (!(*list))
		{
			*list = topush;
			return (0);
		}
		else
		{
			lst = *list;
			while (lst->next)
			{
				lst = lst->next;
				i++;
			}
			lst->next = topush;
		}
		return (i);
	}
	else
		return (-1);
}
