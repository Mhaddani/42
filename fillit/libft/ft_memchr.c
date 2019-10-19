/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 16:05:01 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/12 22:41:33 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)s;
	if (s != NULL)
	{
		i = 0;
		while (i < n)
		{
			if (buf[i] == (unsigned char)c)
				return ((void *)(buf + i));
			i++;
		}
	}
	return (NULL);
}
