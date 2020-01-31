/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 01:26:27 by nmahboub          #+#    #+#             */
/*   Updated: 2019/05/22 01:38:33 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*troncon;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(troncon = (char*)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		troncon[i] = s[start + i];
		i++;
	}
	troncon[i] = '\0';
	return (troncon);
}
