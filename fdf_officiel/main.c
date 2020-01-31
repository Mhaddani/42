/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:18:12 by nmahboub          #+#    #+#             */
/*   Updated: 2020/01/23 00:53:02 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/fdf.h"

void	free_list(t_line **list)
{
	t_line	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->tab);
		free(*list);
		(*list) = tmp;
	}
}

void	print(t_line *list, int min)
{
	int	i;

	while (list)
	{
		i = -1;
		while (++i < min)
			list = list->next;
	}
}

void	menu(t_mlx mlx)
{
	int	i;
	int	height;

	height = mlx.win_h;
	i = -1;
	mlx_string_put(mlx.mlx_ptr, mlx.mlx_win, 20, height - 160,\
			0x00FF00, "PROJECTIONS: P");
	mlx_string_put(mlx.mlx_ptr, mlx.mlx_win, 20, height - 130,\
			0x00FF00, "MOVE with ARROWS");
	mlx_string_put(mlx.mlx_ptr, mlx.mlx_win, 20, height - 100,\
			0x00FF00, "ZOOM : + / -");
	mlx_string_put(mlx.mlx_ptr, mlx.mlx_win, 20, height - 70,\
			0x00FF00, "ALTITUDE H / L");
}

int		main(int argc, char **argv)
{
	int		fd;
	t_mlx	mlx;

	if (argc != 2)
		return (write(1, "Usage: ./fdf [filename]\n", 24));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (errors(3));
	if ((mlx.min = check(fd, &mlx.map_line)) <= 0)
		return (mlx.min == 0 ? write(1, "NO DATA FOUND\n", 14) : 0);
	close(fd);
	fd = open(argv[1], O_RDONLY);
	mlx.list = store(fd, mlx.min);
	init(&mlx, argv[1]);
	bresenham(mlx);
	menu(mlx);
	mlx_hook(mlx.mlx_win, 2, 0, &keypress, &mlx);
	mlx_loop(mlx.mlx_ptr);
}
