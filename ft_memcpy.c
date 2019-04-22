/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:45:26 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/19 19:05:47 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restricted dst, const void *restrict src, size_t n)
{
	int		i;

	i = 0;
	char *tab = (char *)dst;
	char *tab1 = (char *)src;
	while (i < n)
	{
		tab[i] = tab1[i];
		i++;
	}
}
