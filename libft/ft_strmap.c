/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:59:12 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/23 02:59:13 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		cnt;
	char	*freshstr;

	cnt = 0;
	i = 0;
	freshstr = NULL;
	while (s[cnt])
		cnt++;
	freshstr = (char *)malloc(sizeof(char) * cnt);
	while (s[i])
	{
		freshstr[i] = f(s[i]);
		i++;
	}
	freshstr[i] = '\0';
	return (freshstr);
}
