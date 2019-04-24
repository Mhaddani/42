/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 04:41:16 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/23 04:41:21 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*freshsub;
	size_t	cnt;
	size_t	pos;

	freshsub = NULL;
	i = 0;
	cnt = 0;
	pos = start + len;
	while (s[cnt])
		cnt++;
	if (pos < cnt)
	{
		if ((freshsub = (char *)malloc(sizeof(char) * (len + 1))))
		{
			while (start < pos)
			{
				freshsub[i] = s[start];
				i++;
				start++;
			}
		}
		else
			return (NULL);
	}
	freshsub[i] = '\0';
	return (freshsub);
}
