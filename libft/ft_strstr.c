/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 13:20:43 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/28 13:20:44 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		s1 = (unsigned char*)haystack;
		s2 = (unsigned char*)needle;
		while (*s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
