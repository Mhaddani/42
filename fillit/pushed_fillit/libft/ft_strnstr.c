/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:00:58 by danas             #+#    #+#             */
/*   Updated: 2019/04/14 23:01:05 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	itn;
	char	*it1;
	char	*it2;

	if (!*s2)
		return ((void *)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			itn = n;
			it1 = (void *)s1 + 1;
			it2 = (void *)s2 + 1;
			while (itn-- && *it1 && *it2 && *it1 == *it2)
			{
				++it1;
				++it2;
			}
			if (!*it2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
