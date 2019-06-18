/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 20:51:51 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/12 23:34:21 by mhaddani         ###   ########.fr       */
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
		printf("%s\t", lst->content);
		if (lst->next == NULL)
			printf("%zu", lst->content_size);
		else
			printf("%zu\n", lst->content_size);
		lst = lst->next;
		i++;
	}
}
