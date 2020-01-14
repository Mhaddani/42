/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 05:26:31 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/18 19:57:46 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	str = NULL;
	i = 0;
	j = 0;
	if (s1 != NULL && s2 != NULL)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		if ((str = (char *)malloc(sizeof(char) * (i + j + 1))))
		{
			i = -1;
			j = -1;
			while (s1[++i])
				str[i] = s1[i];
			while (s2[++j])
				str[i++] = s2[j];
			str[i] = '\0';
		}
	}
	return (str);
}
