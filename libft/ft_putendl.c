/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 01:38:35 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/19 01:38:37 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_putendl(char const *s)
{
	if (s != NULL)
	{
		ft_putstr(s);
		write(1, "\n", 1);
	}
}

int main()
{
	char c[] = "MOUAD";
	ft_putendl(c);
	return 0;
}
