/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 01:36:07 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/19 01:36:08 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int main()
{
	char c[] = "MOUAD";
	ft_putstr(c);
	return 0;
}
