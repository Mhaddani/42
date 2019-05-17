/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:08:24 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/14 15:08:24 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if(s != NULL)
	{
		while (s[i])
		{
			if (s[i] == (char)c)
				return ((char *)s + i);
			i++;
		}
	}
	return (NULL);
}

int main()
{
	char s1[] = "MOUADM kool";
	char s2[] = " HADDANI";

	printf("%s", ft_strchr(s1, 'D'));
	return 0;
}