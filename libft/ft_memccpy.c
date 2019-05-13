/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 03:40:59 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/26 03:41:41 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char *sc;
	char *ds;

	ds = (char *)dst;
	sc = (char *)src;
	if(ds != NULL && sc != NULL)
	{
		i = 0;
		while (i < n)
		{
			ds[i] = sc[i];
			i++;
		}
	}
	return ((void *)dst);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	size_t		found;
	char		*sc;
	char		*ds;

	sc = (unsigned char *)src;
	ds = (unsigned char *)dst;
	if (ds != NULL && sc != NULL)
	{
		i = 0;
		found = 0;
		while (sc[i] && i < n)
		{
			if (sc[i] == (unsigned char)c)
			{
				found = 1;
				break;
			}
			i++;
		}
		if (found)
		{
			ft_memcpy(dst, src, i + 1);
			return ((void *)(src + i + 1));
		}
		else
			ft_memcpy(dst, src, n);
	}
	return (NULL);
}

int main()
{
	char dest[] = "MOUAD HADDANI";
	char src[] = "IS A BAD BOY";

	printf("%s", ft_memccpy(dest, src, 'H', 10));
	return 0;
}