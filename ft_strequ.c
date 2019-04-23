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
	size_t		cntS1;
	size_t		cntS2;

	i = 0;
	cntS1 = 0;
	cntS2 = 0;
	while (s1[cntS1])
		cntS1++;
	while (s2[cntS2])
		cntS2++;
	if(cntS1 == cntS2)
	{
		while (s1[i])
		{
			if(s1[i] == s2[i])
				i++;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
