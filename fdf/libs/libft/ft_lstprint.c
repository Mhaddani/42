/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 20:51:51 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/27 20:50:55 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *list, int size)
{
	t_list	*lst;
	int		i;

	i = 0;
	lst = list;
	while (lst && i <= size + 1)
	{
		ft_putstr(lst->content);
		ft_putchar('\t');
		if (lst->next == NULL)
			ft_putnbr(lst->content_size);
		else
		{
			ft_putnbr(lst->content_size);
			ft_putchar('\n');
		}
		lst = lst->next;
		i++;
	}
}
