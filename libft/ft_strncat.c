/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 14:34:08 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/14 14:34:08 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	char	*buf;

	if (s1 != NULL || s2 != NULL)
	{
		i = 0;
		if((buf = (char *)malloc(sizeof(char) * n + 1)))
		{
			while (s2[i] && i < n)
			{
				buf[i] = s2[i];
				i++;
			}
			buf[i] = '\0';
			ft_strcat(s1, buf);
		}
	}
	return (s1);
}

int main()
{
	char s1[] = "MOUAD";
	char s2[] = " HADDANI";

	printf("%s", ft_strncat(s1, s2, 2));
	return 0;
}
