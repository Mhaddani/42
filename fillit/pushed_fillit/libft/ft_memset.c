/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:52:32 by danas             #+#    #+#             */
/*   Updated: 2019/06/01 03:50:58 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	index;
	char			*b2;
	unsigned char	c2;

	if (len)
	{
		c2 = (unsigned char)c;
		b2 = (char *)b;
		index = 0;
		while (index < len)
		{
			b2[index] = c2;
			index++;
		}
	}
	return (b);
}
