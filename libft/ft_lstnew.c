/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 17:16:39 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/17 17:16:41 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	
	if (list = malloc(sizeof(t_list)))
	{
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			if (!(list->content = malloc(content_size)))
				return (NULL);
			ft_memcpy(list->content, content, content_size);
		}
		list->next = NULL;
	}
	return (NULL);
}
