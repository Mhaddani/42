/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tet_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 06:45:37 by mhaddani          #+#    #+#             */
/*   Updated: 2019/11/04 20:43:56 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	is_form_valid(char *buff, char **tets_tab)
{
	int	i;
	static int	j;
	int	point;
	int	hash;
	int	t_count;

	i = -1;
	point = 0;
	hash = 0;
	t_count = 0;
	if (!(buff[4] == '\n' && buff[9] == '\n' && buff[14] ==\
	'\n' && buff[19] == '\n' && (buff[20] == '\n' || buff[20] == '\0')))
		return (-1);
	while (buff[++i])
	{
		point += (buff[i] == '.' ? 1 : 0);
		if (buff[i] == '#')
		{
			tets_tab[j][hash] = i;
			t_count += is_touching(buff, i);
			hash++;
		}
	}
	j++;
	if (!(point == 12 && hash == 4 && hash && t_count == 6))
		return (-1);
	return (1);
}

int	is_touching(char *buff, int pos)
{
	int	count;

	count = 0;
	if ((buff[pos - 1]) == '#')
		count++;
	if ((buff[pos + 1]) == '#')
		count++;
	if ((buff[pos - 5]) == '#')
		count++;
	if ((buff[pos + 5]) == '#')
		count++;
	return (count);
}

int	is_tet_valid(char *buff, char **tets_tab)
{
	int	i;
	int	j;
	int	a;
	int	k;
	int	b;
	int	min;
	int	bool;
	static int p;

	k = 0;
	i = 0;
	bool = 0;
	if ((is_form_valid(buff, tets_tab)) != -1)
	{
		while (tets_tab[i])
		{
			printf("----------- [%d] -------------\n", p);
			min = (tets_tab[i][k] < tets_tab[i][k + 1]) ? tets_tab[i][k] : tets_tab[i][k + 1];
			while (k < 4)
			{
				min = (tets_tab[i][k] < min) ? tets_tab[i][k] : min;
				k++;
			}
			ft_putstr("\n");
			ft_putnbr(min);
			ft_putstr("\n");
			// k = 0;
			// while (min > 4){
			// 	while (tets_tab[i][k])
			// 	{
			// 		a = tets_tab[i][k];
			// 		a -= 5;
			// 		tets_tab[i][k] = a;
			// 		k++;
			// 	}
			// 	min -= 5;
			// }

				// k = 0;
				// while (1)
				// {
				// 	if (k == 3)
				// 	{
				// 		k = 0;
				// 		while (k < 4)
				// 		{
				// 			a = tets_tab[i][k];
				// 			a -= 1;
				// 			tets_tab[i][k] = a;
				// 			k++;
				// 		}
				// 	}	
				// 	if (((a = tets_tab[i][k]) % 5) == 0)
				// 		break;
				// 	k++;
				// }
				// int o;
				// o = ft_atoi(tets_tab[0][2]);
				// ft_putnbr(o);
				// printf("{;");
				// printf("%d", tets_tab[0][0]);
				//printf(";}\n");
			// while (((int)(tets_tab[i][0]) % 5 != 0) && ((int)(tets_tab[i][1]) % 5) != 0 && ((int)(tets_tab[i][2]) % 5 != 0) && ((int)(tets_tab[i][3]) % 5 != 0))	
			// {
			// 	tets_tab[i][0] = tets_tab[i][0] - 1;
			// 	tets_tab[i][1] = tets_tab[i][1] - 1;
			// 	tets_tab[i][2] = tets_tab[i][2] - 1;
			// 	tets_tab[i][3] = tets_tab[i][3] - 1;
			// }
			//ft_putstr("js");
			
			i++;
		}
		p++;
		return (1);
	}
	return (-1);
}
