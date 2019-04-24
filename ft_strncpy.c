/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 05:07:51 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/13 05:32:09 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (i < len)
	{
		while (src[j])
		{
			dst[j] = src[j];
			j++;
		}
		while (dst[i])
		{
			dst[i] = '\0';
			i++;
		}
	}
	else if (i > len)
	{
		while (j < len)
		{
			dst[j] = src[j];
			j++;
		}
	}
	return (dst);
}
