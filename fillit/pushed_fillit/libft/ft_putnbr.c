/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 22:53:31 by danas             #+#    #+#             */
/*   Updated: 2019/06/01 04:12:57 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n <= -10)
			ft_putnbr(n / -10);
		ft_putchar(-(n % 10) + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}
