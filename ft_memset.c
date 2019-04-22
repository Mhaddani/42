/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 07:30:54 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/19 18:44:47 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	int     i;
	unsigned char    *cool;

	cool = (unsigned char *)b;
	i = 0;
	while(i < len)
	{
		cool[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int 	main()
{
	char tab[] = "MOUAD";
	
	printf("%s", ft_memset(tab, '$', 3));
	return 0;
}
