/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 03:40:59 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/26 03:41:41 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sc;

	ds = (unsigned char*)dst;
	sc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		ds[i] = sc[i];
		if (ds[i] == (unsigned char)c)
			return ((void*)ds + i + 1);
		++i;
	}
	return (NULL);
}
