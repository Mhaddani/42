/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:39:32 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/07 00:33:58 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**tab;

	i = 0;
	k = 0;
	if ((!(s) || !(c)) || (!(tab = (char **)malloc(sizeof(char *) *
						(ft_countwords(s, c) + 1)))))
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		j = 0;
		if (ft_isword(s, i, c))
		{
			while (s[i + j] != c && s[i + j])
				j++;
			tab[k++] = ft_strsub(s, i, j);
		}
		i++;
	}
	tab[k] = NULL;
	return (tab);
}
