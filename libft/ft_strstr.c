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

/*
char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;
	size_t		pos;
	size_t		found;
	size_t		ispace;

	i = 0;
	j = 0;
	pos = 0;
	found = 0;
	ispace = 1;
	if (needle == NULL)
		return (haystack);
	else
	{
		if (haystack == NULL || strlen(needle) > strlen(haystack))
			return (NULL);
		else
		{
			while (needle[i])
			{
				if (needle[i] != ' ' && needle[i] != '\t' && needle[i] != '\n')
				{
					ispace = 0;
					break ;
				}
				i++;
			}
			if (ispace)
				return (haystack);
			else
			{
				while (haystack[i])
				{
					if (needle[j] == haystack[i])
					{
						pos = i;
						found = 1;
						while (haystack[i])
						{
							if (needle[j] == haystack[i])
							{
								if (needle[j + 1] == '\0')
									break ;
								i++;
								j++;
							}
							else
							{
								i--;
								found = 0;
								j = 0;
								break ;
							}
						}
					}
					if (found)
						return (haystack + pos);
					i++;
				}
				return (NULL);
			}
		}
	}
}
*/
