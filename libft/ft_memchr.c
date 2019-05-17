/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 16:05:01 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/13 16:05:02 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	int		i;
	unsigned char	*buf;

	buf = (unsigned char *)s;
	if (s != NULL)
	{
		i = 0;
		while (buf[i] && i < n)
		{
			if(buf[i] == (unsigned char)c)
				return ((void *)(buf + i));
			i++;
		}
	}
	return (NULL);
}
