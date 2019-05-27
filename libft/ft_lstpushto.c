/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushto.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 09:49:50 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/26 21:01:46 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstpushto(t_list **list, t_list *topush, size_t pos)
{
	t_list	*lst;
	size_t	i;
	size_t	lstlen;
	t_list	*tmp;
	t_list	*ptr;

	lst = *list;
	if (topush)
	{
		i = 0;
		lstlen = ft_lstlen(&lst);
		if (pos == 0)
			ft_lstadd(&*list, topush);
		else
		{
			while (i < pos && lst->next != NULL)
			{
				ptr = lst;
				lst = lst->next;
				i++;
			}
			if (lst->next)
				tmp = lst;
			else
			{
				lst->next = topush;
				return (pos);
			}
			topush->next = tmp;
			ptr->next = topush;
		}
		return (pos);
	}
	else
		return (-1);
}
