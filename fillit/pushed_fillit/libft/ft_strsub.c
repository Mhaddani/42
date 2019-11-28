/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 23:02:01 by danas             #+#    #+#             */
/*   Updated: 2019/04/14 23:02:03 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned intstart, size_t len)
{
	char	*r;
	size_t	i;

	if (!s || !(r = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len && s[i])
		r[i++] = s[intstart++];
	r[i] = '\0';
	return (r);
}
