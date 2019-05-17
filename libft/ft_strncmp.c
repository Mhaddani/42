/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:00:42 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/28 14:00:43 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
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
	char tt[] = "MOUADD";
	printf("%d", ft_strncmp(t, tt, 5));
	return 0;
}