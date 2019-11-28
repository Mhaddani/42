/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 22:48:48 by danas             #+#    #+#             */
/*   Updated: 2019/04/22 03:48:54 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_itoa_len(int n)
{
	size_t	r;

	if (n == 0)
		return (1);
	r = 0;
	if (n < 0)
		r++;
	while (n)
	{
		n /= 10;
		r++;
	}
	return (r);
}

char				*ft_itoa(int n)
{
	char	*p;
	int		len;
	int		i;

	len = ft_itoa_len(n);
	if (!(p = (char *)malloc(len + 1)))
		return (NULL);
	p[len] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (i < len--)
	{
		p[len] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (p);
}
