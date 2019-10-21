/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tet_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 06:45:37 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/21 09:51:52 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	is_form_valid(char *buff, char ***tets_tab)
{
	int	i;
	static int	j;
	int	point;
	int	hash;
	int	t_count;

	i = -1;
	j = 0;
	point =0;
	hash =0;
	t_count = 0;
	if (!(buff[4] == '\n' && buff[9] == '\n' && buff[14] ==\
	'\n' && buff[19] == '\n' && (buff[20] == '\n' || buff[20] == '\0')))
		return (-1);
	while (buff[++i])
	{
		////////////////////////////// DEBUG BEGINING ////////////////////////
		//ft_putendl(&buff[i]);
		///////////////////////////////////END////////////////////////////////
		point += (buff[i] == '.' ? 1 : 0);
		if (buff[i] == '#')
		{
			//(*tets_tab)[j][hash] = i;
			t_count += is_touching(buff, i);
			hash++;
		}
	}
	j++;
	//(*tets_tab)[j][hash] = '\0';
	ft_putnbr(hash);
	ft_putstr("\n");
	ft_putnbr(point);
	ft_putstr("\n");
	ft_putnbr(t_count);
	ft_putstr("\n");
	if (!(point == 12 && hash == 4 && hash && t_count == 6))
		return (-1);
	return (1);
}

int	is_touching(char *buff, int pos)
{
	int	count;
	ft_putstr("------------------\n");
	ft_putchar(buff[pos - 5]);
	ft_putstr("\n------------------\n");
	count = 0;
	if ((buff[pos - 1]) == '#')
		count++;
	if ((buff[pos + 1]) == '#')
		count++;
	if ((buff[pos - 5]) == '#')
		count++;
	if ((buff[pos + 5]) == '#')
		count++;
	//ft_putnbr(count);
	return (count);
}

int	is_tet_valid(char *buff, char ***tets_tab)
{
	if ((is_form_valid(buff, tets_tab)) != -1)
		return (1);
	return (-1);
}
