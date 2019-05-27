/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 14:48:18 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/14 14:48:19 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		ds;
	size_t		sc;
	size_t		j;

	ds = ft_strlen(dst);
	sc = ft_strlen(src);
	if (size <= ds)
		sc = sc + size;
	else
		sc = sc + ds;
	j = 0;
	while (src[j] && ds + 1 < size)
	{
		dst[ds] = src[j];
		ds++;
		j++;
	}
	dst[ds] = '\0';
	return (sc);
}
