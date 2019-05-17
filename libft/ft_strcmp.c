/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:00:47 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/28 14:00:48 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);;
}

int main()
{
	char t[] = "MOUAD";
	char tt[] = "MOUADDpopo";
	printf("%d", ft_strcmp(t, tt));
	return 0;
}
