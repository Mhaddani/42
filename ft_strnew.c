/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:06:00 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/19 14:10:50 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memalloc(size_t size);

char	*ft_strnew(size_t size)
{
	char	*pt;
	pt = (char *)ft_memalloc(size + 1);
	//pt = (char*)pt1;
	//pt[size] = '\0';
	return (pt);
}
/*
int main()
{
	int i = 0;
	char	*c = ft_strnew(10);
	while (c[i])
	{
		printf("%c", c[i]);
		i++;
	}
	return 0;
}*/
