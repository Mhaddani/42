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
	char	*str;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	i = 0;
	while (ft_whitespace(s[i]))
		i++;
	while (ft_whitespace(s[j - 1]))
		j--;
	if (j < i)
		j = i;
	if (!(str = ft_strnew(j - i)))
		return (NULL);
	return (ft_strncpy(str, s + i, j - i));
}
