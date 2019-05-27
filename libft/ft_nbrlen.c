/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 09:09:12 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/19 09:09:13 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		if (n == -2147483648)
			return (10);
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}