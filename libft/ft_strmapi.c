/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 03:13:41 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/23 03:13:42 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		cnt;
	char	*freshstr;

	freshstr = NULL;
	if (s)
	{
		i = 0;
		cnt = ft_strlen(s);
		freshstr = (char *)malloc(sizeof(char) * cnt);
		while (s[i])
		{
			freshstr[i] = f(i, s[i]);
			i++;
		}
		freshstr[i] = '\0';
	}
	return (freshstr);
}
