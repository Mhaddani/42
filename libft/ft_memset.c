/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 07:30:54 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/19 18:44:47 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		buf[i] = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}
