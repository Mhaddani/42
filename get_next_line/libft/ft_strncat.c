/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 14:34:08 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/14 14:34:08 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*buf;

	if (s1 && s2)
	{
		i = 0;
		if ((buf = (char *)malloc(sizeof(char) * (n + 1))))
		{
			while (s2[i] && i < n)
			{
				buf[i] = s2[i];
				i++;
			}
			buf[i] = '\0';
			ft_strcat(s1, buf);
			free(buf);
		}
	}
	return (s1);
}
