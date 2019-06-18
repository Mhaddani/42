/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 07:11:10 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/12 23:16:10 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*buf;
	t_list	*begining_list;

	if (!lst || !f)
		return (NULL);
	buf = f(lst);
	if (!(new = ft_lstnew(buf->content, buf->content_size)))
		return (NULL);
	begining_list = new;
	lst = lst->next;
	while (lst)
	{
		buf = f(lst);
		if (!(new->next = ft_lstnew(buf->content, buf->content_size)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (begining_list);
}
