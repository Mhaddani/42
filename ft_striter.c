/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:43:06 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/21 00:55:40 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t		i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			f(&s[i]);
			i++;
		}
	}
	else if(s == NULL)
		printf("it is a null pointer");
}
