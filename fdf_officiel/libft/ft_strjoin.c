/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 22:35:27 by nmahboub          #+#    #+#             */
/*   Updated: 2019/05/11 05:14:54 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	fraiche = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (fraiche == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		fraiche[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		fraiche[i + j] = s2[j];
		j++;
	}
	fraiche[i + j] = '\0';
	return (fraiche);
}
