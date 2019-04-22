/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:05:13 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/19 13:15:32 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t		i;
	char	*pt;

	i = 0;
	if(size != 0)
	{
		if((pt = (char *)malloc(sizeof(char) * size)))
		{
			while (i < size)
			{
				pt[i] = 0;
				i++;
			}
			/*i = 0;
			while (i < size)
			{
				printf("%c\n", pt[i]);
				i++;
			}*/
			return ((void*)pt);
		}
	}
	return (NULL);
}
/*
int main()
{
	ft_memalloc(10);
	return 0;
}
*/
