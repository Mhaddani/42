/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 09:12:58 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/11 14:15:03 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_countwords(char const *str, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if ((i == 0 && str[i] != c) || (str[i] != c && str[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}
