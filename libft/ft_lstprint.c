/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 20:51:51 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/26 21:02:23 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *list, int size)
{
	t_list	*lst;
	int		i;

	i = 0;
	lst = list;
	while (lst && i < size)
	{
		printf("%s\t", lst->content);
		printf("%d\n\n", lst->content_size);
		lst = lst->next;
		i++;
	}
}
