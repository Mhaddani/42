/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 19:47:17 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/27 19:47:29 by mhaddani         ###   ########.fr       */
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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buf;

	buf = (void *)malloc(len * sizeof(void *));
	if (!buf)
		return (NULL);
	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	free(buf);
	return (dst);
}

int main()
{
	char s[] = "MOUAD QBCPNR";
	char *s1 = s + 4;
	printf("%s", ft_memmove(s, s1, 7));
	return 0;
}