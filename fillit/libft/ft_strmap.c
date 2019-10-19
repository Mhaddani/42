/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:59:12 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/12 23:58:30 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		cnt;
	char	*buf;

	buf = NULL;
	if (s)
	{
		i = 0;
		cnt = ft_strlen(s);
		if (!(buf = (char *)malloc(sizeof(char) * cnt + 1)))
			return (NULL);
		while (s[i])
		{
			buf[i] = f(s[i]);
			i++;
		}
		buf[i] = '\0';
	}
	return (buf);
}
