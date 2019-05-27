/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:00:42 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/28 14:00:43 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
	{
		while ((*s1 || *s2) && n--)
		{
			if (*s1++ != *s2++)
				return (*(unsigned char *)(s1 - 1) - \
				*(unsigned char *)(s2 - 1));
		}
	}
	return (0);
}
