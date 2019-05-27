/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:45:26 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/19 19:05:47 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*sc;
	char		*ds;

	ds = (char *)dst;
	sc = (char *)src;
	if (ds != NULL && sc != NULL)
	{
		i = 0;
		while (i < n)
		{
			ds[i] = sc[i];
			i++;
		}
	}
	return ((void *)dst);
}
