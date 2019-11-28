/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:03:56 by danas             #+#    #+#             */
/*   Updated: 2019/04/14 23:04:00 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char		*tmp_d;
	char const	*tmp_s;
	int			index;

	index = 0;
	tmp_d = (char *)dst;
	tmp_s = (char const *)src;
	while (n)
	{
		tmp_d[index] = tmp_s[index];
		n--;
		index++;
	}
	return (dst);
}
