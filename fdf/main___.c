/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:08:21 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/15 10:41:20 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

char *ft_strrev(char *c)
{
	int len;
	int i;
	char *str;

	len = 0;
	i = -1;
	if (c != NULL)
	{
		len = ft_strlen(c);
		str = ft_strnew(len);
		while (--len >= 0)
		{
			str[++i] = c[--len];
		}
	}
	return (str);
}

int ft_power(int x, unsigned int y) 
{ 
	if (y == 0) 
		return 1; 
	else if (y % 2 == 0) 
		return ft_power(x, y / 2) * ft_power(x, y / 2); 
	else
		return x * ft_power(x, y / 2) * ft_power(x, y / 2); 
}

int		get_color(char *col)
{
	//char *p = "10,0xFFFFFF";
	int i = 0;
	int res = 0;
	char **splited;
	char *str;
	int len;

	len = 0;
	if (splited = ft_strsplit(col, ','))
	{
		if (splited[1][0] == '0' && splited[1][1] == 'x')
		{
			str = ft_strrev(splited[1]);
			len = ft_strlen(str);
			len -= 2;
			while (i < len)
			{
				if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D'\
						|| str[i] == 'E' || str[i] == 'F')
					res = res + ft_power(16, i) * ((unsigned char)(str[i] - '0') - 7);
				else
					res = res + ft_power(16, i) * (unsigned int)(str[i] - 48);
				//if (re[1][i] == 0)
				//res = res + (unsigned char)p[i] * 256;
				//printf("%d\n", (unsigned char)p * 256);
				i++;
			}
		}
	}
	else
		return (-1);
	return (res);
}


int main(int ac, char **av)
{
	
	return 0;
}
