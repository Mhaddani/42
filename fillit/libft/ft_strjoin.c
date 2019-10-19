/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 05:26:31 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/23 05:26:32 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*concs;

	concs = NULL;
	i = 0;
	j = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i])
			i++;
		while (s2[j])
			j++;
		if ((concs = (char *)malloc(sizeof(char) * (i + j + 1))))
		{
			i = -1;
			j = -1;
			while (s1[++i])
				concs[i] = s1[i];
			while (s2[++j])
				concs[i++] = s2[j];
			concs[i] = '\0';
		}
	}
	return (concs);
}
