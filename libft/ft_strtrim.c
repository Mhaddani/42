/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 08:40:34 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/23 08:40:36 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		lastchar;
	char	*freshcpy;
	int		firstchar;

	i = 0;
	j = 0;
	firstchar = 0;
	lastchar = 0;
	freshcpy = NULL;
	if (s != NULL)
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		firstchar = i;
		while (s[i])
		{
			if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
				lastchar = i;
			i++;
		}
		i = firstchar;
		freshcpy = (char *)malloc(sizeof(char) * (lastchar - firstchar + 2));
		while (i <= lastchar)
		{
			freshcpy[j] = s[i];
			i++;
			j++;
		}
		freshcpy[j] = '\0';
	}
	return (freshcpy);
}
