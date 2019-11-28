/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 23:36:52 by danas             #+#    #+#             */
/*   Updated: 2019/11/20 15:26:22 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lstrev(t_list **alst)
{
	t_list	*prev;
	t_list	*cur;
	t_list	*next;

	prev = NULL;
	cur = *alst;
	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*alst = prev;
}

void	fin(t_list *tetri_list, int val)
{
	int		side;
	char	*str;

	ft_lstrev(&tetri_list);
	side = high_sqrt((val - 'A') * 4);
	str = squar_string(side + 1);
	while (solve(tetri_list, str, 0, side) == 0)
	{
		side++;
		ft_memdel((void **)&str);
		str = squar_string(side + 1);
	}
	free_list(tetri_list);
	ft_putendl(str);
	ft_memdel((void **)&str);
}

int		rd(int fd, char val)
{
	char	buff[22];
	int		nbread;
	t_list	*tetri_list;
	int		temp;
	char	*str_rsz;

	tetri_list = NULL;
	while ((nbread = read(fd, buff, 21)))
	{
		temp = nbread;
		buff[nbread] = '\0';
		if (checker(buff) == 0)
			return (-1);
		str_rsz = string_resize(buff, v(buff), val);
		ft_lstadd(&tetri_list, ft_lstnew(str_rsz, ft_strlen(str_rsz) + 1));
		ft_memdel((void **)&str_rsz);
		val++;
	}
	if (((val - 'A') == 0) || (temp != 20))
	{
		free_list(tetri_list);
		return (-1);
	}
	fin(tetri_list, val);
	return (0);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	if ((fd = open(argv[1], O_RDONLY)) != -1)
	{
		if (rd(fd, 'A') == -1)
			ft_putstr("error\n");
	}
	else
	{
		ft_putstr("error\n");
	}
	return (0);
}
