/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:01:10 by danas             #+#    #+#             */
/*   Updated: 2019/04/14 23:01:12 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*str;
	size_t		j;

	str = (char *)s;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			j = i;
		i++;
	}
	if (str[j] == (char)c)
		return (str + j);
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
