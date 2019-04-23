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
	char	*freshString;

	cnt = 0;
	i = 0;
	freshString = NULL;
	while (s[cnt])
		cnt++;
	freshString = (char *)malloc(sizeof(char) * cnt);
	while (s[i])
	{
		freshString[i] = f(i, s[i]);
		i++;
	}
	freshString[i] = '\0';
	return (freshString);
}
