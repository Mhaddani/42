/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:56:45 by danas             #+#    #+#             */
/*   Updated: 2019/04/14 22:56:48 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	l;
	size_t	i;
	char	*r;

	l = 0;
	while (src[l])
		l++;
	r = (char *)malloc(l + 1);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		r[i] = src[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
