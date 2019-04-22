/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 00:30:20 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/21 00:59:23 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striter(char *s, void (*f)(char *));
void	ft_strclr(char *s);

int main() {
	char *tab = "MOUAD";

	void	*ftt(char *c)
	{
		
	}

	ft_striter(tab, ft_strclr(tab));

	//printf("%p\n", tab);
//	printf("%p\n", &tab[0]);
//	printf("%p\n", &tab[1]);
//	printf("%p\n", &tab[2]);
//	printf("%p\n", &tab[3]);
//	printf("%p\n", &tab[4]);
//	printf("%p\n", &tab[5]);
	return 0;
}
