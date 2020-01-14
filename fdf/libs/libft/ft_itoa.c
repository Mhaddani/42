/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 01:35:23 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/19 01:35:24 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	nbr;
	int		sign;

	nbr = n;
	sign = 0;
	if (n < 0)
		sign = 1;
	i = ft_nbrlen(n);
	if (!(str = ft_strnew(i + sign)))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (i > 0)
	{
		str[i + sign - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
