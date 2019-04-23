/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 04:41:16 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/23 04:41:21 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char *freshSub;
	size_t		cnt;
	size_t		pos;

	freshSub = NULL;
	i = 0;
	cnt = 0;
	pos = start + len;
	while (s[cnt])
		cnt++;
	if (pos < cnt)
	{
		if ((freshSub = (char *)malloc(sizeof(char) * (len + 1))))
		{
			while (start < pos)
			{
				freshSub[i] = s[start];
				i++;
				start++;
			}
		}
		else 
			return (NULL);
	}
	freshSub[i] = '\0';
	return (freshSub);
}

int main()
{
    char t[] = "MOUAD HADDANI";
    char t1[] = "MOUAD";

    printf("%s", ft_strsub(t, 4, 6));
}
