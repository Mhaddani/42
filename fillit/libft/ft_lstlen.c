/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 20:39:30 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/12 22:50:38 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list **listhd)
{
	t_list	*lst;
	size_t	i;

	i = 0;
	lst = *listhd;
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
