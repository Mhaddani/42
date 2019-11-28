/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:58:08 by danas             #+#    #+#             */
/*   Updated: 2019/04/22 05:04:39 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	src_size = 0;
	while (dst[i])
		i++;
	while (src[src_size])
		src_size++;
	dest_size = i;
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = 0;
	return (src_size + ((dest_size > size) ? size : dest_size));
}
