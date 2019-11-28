/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:01:50 by danas             #+#    #+#             */
/*   Updated: 2019/04/14 23:01:52 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[a])
	{
		while (s1[a + b] && s1[a + b] == s2[b])
			b++;
		if (!s2[b])
			return ((char *)s1 + a);
		else
			b = 0;
		a++;
	}
	return (NULL);
}
