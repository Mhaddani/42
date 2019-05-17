/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:08:40 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/14 17:08:41 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return  (NULL);
}

int main()
{
	char s1[] = "MOUADM kooMl";
	char s2[] = " HADDANI";

	printf("%s", ft_strrchr(s1, 'M'));
	return 0;
}
