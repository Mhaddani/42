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

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	size_t		found;
	char		*sc;
	char		*ds;

	sc = (char *)src;
	ds = (char *)dst;
	if (ds != NULL && sc != NULL)
	{
		i = 0;
		found = 0;
		while (sc[i] && i < n)
		{
			if (sc[i] == (unsigned char)c)
			{
				found = 1;
				break;
			}
			i++;
		}
		if (found)
		{
			ft_memcpy(dst, src, i + 1);
			return (src + i + 1);
		}
		else
		{
			ft_memcpy(dst, src, n);
			return (NULL);
		}
	}
	return (NULL);
}
