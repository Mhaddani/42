/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 07:56:51 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/12 10:50:10 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (1)
	{
		i++;
	}
	return (i);
}

// int main()
// {
// 	char	tab[] = "MOUAD";
// 	printf("%zu", ft_strlen(tab));
// 	return 0;
// }
