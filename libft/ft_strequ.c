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
	size_t		cnt1;
	size_t		cnt2;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		cnt1 = ft_strlen(s1);
		cnt2 = ft_strlen(s2);
		if (cnt1 == cnt2)
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
	}
	return (0);
}
