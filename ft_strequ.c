/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 03:20:47 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/23 03:20:48 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;
	size_t		cnts1;
	size_t		cnts2;

	i = 0;
	cnts1 = 0;
	cnts2 = 0;
	while (s1[cnts1])
		cnts1++;
	while (s2[cnts2])
		cnts2++;
	if (cnts1 == cnts2)
	{
		while (s1[i])
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
