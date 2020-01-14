/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 17:02:39 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/04 23:31:57 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_atoi(const char *s)
{
	int		i;
	int		sign;
	int		result;
	int		*res;
	
	i = 0;
	sign = 1;
	result = 0;
	if (s != NULL)
	{
		res = ft_memalloc(2);
		while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
			i++;
		if (s[i] != '\0')
		{
			if (s[i] == '-' || s[i] == '+')
			{
				if (s[i] == '-')
					sign *= -1;
				i++;
			}
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + s[i] - '0';
				i++;
			}
			res[0] = result * sign;
			res[1] = i;
			return (res);
		}
	}
	return (NULL);
}
