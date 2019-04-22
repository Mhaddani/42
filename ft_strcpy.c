/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 03:09:22 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/13 05:07:08 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t		i;

	i = 0;
	while (src[i])
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(int argc, char* argv[])
{
	char tab[] = "MOUAD";
	char tab1[] = "IOP";
	printf("%s", ft_strcpy(tab, tab1));	
}
