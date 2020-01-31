/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:37:40 by nmahboub          #+#    #+#             */
/*   Updated: 2019/05/23 04:51:39 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chars(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		chars;
	int		j;
	int		i;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(tab = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		chars = ft_chars(&s[i], c);
		if (chars == 0)
			break ;
		tab[j] = ft_strsub(s, i, chars);
		j++;
		i = i + chars;
	}
	tab[j] = NULL;
	return (tab);
}
