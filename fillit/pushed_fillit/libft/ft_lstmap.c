/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 20:21:33 by danas             #+#    #+#             */
/*   Updated: 2019/07/21 20:21:41 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*frais;

	if (lst != NULL)
	{
		frais = (t_list *)malloc(sizeof(t_list));
		frais = f(lst);
		frais->next = ft_lstmap(lst->next, f);
		return (frais);
	}
	return (NULL);
}
