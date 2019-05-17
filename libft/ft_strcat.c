/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 05:32:58 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/13 18:41:35 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 != NULL || s2 != NULL)
	{
		i = ft_strlen(s1);
		while (s2[j])
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
		s1[i] = '\0';
	}
	return (s1);
}

int main()
{
	char s1[] = "MOUAD";
	char s2[] = " HADDANI";

	printf("%s", ft_strcat(s1, s2));
	return 0;
}
