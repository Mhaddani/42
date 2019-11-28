/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:52:21 by danas             #+#    #+#             */
/*   Updated: 2019/04/22 05:57:17 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	char *p;

	if ((p = (char *)malloc(len)))
	{
		ft_memcpy(p, src, len);
		ft_memcpy(dst, p, len);
	}
	free(p);
	return (dst);
}
