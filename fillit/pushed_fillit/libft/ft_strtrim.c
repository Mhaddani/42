/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 23:02:19 by danas             #+#    #+#             */
/*   Updated: 2019/04/14 23:02:22 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	char		*p;

	if (!s)
		return (NULL);
	p = ft_strdup(s);
	if (!p)
		return (NULL);
	while (*p == '\t' || *p == '\n' || *p == ' ')
		p++;
	i = ft_strlen(p) - 1;
	while (p[i] == '\t' || p[i] == '\n' || p[i] == ' ')
		i--;
	p[++i] = '\0';
	return (ft_strdup(p));
}
