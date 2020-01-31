/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:18:12 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/23 01:04:00 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

void	iso(int *x, int *y, int z)
{
	int	prev_x;
	int	prev_y;

	prev_x = *x;
	prev_y = *y;
	*x = (prev_x - prev_y) * cos(0.76373398);
	*y = (prev_y + prev_x) * sin(0.56373398) - z;
}

void	draw_horizontaly(t_mlx mlx, t_pixel start, t_pixel end, int clr)
{
	t_draw	d;

	d.dx = abs(end.x - start.x);
	d.dy = abs(end.y - start.y);
	d.sx = end.x - start.x > 0 ? 1 : -1;
	d.sy = end.y - start.y > 0 ? 1 : -1;
	d.dp = 0;
	while (start.x != end.x)
	{
		mlx_pixel_put(mlx.mlx_ptr, mlx.mlx_win, start.x, start.y, clr);
		start.x += d.sx;
		d.dp += d.dy;
		if (d.dp >= d.dx && start.y != end.y)
		{
			start.y += d.sy;
			d.dp -= d.dx;
		}
	}
	mlx_pixel_put(mlx.mlx_ptr, mlx.mlx_win, start.x, start.y, clr);
}

void	draw_verticaly(t_mlx mlx, t_pixel start, t_pixel end, int clr)
{
	t_draw	d;

	d.dx = abs(end.x - start.x);
	d.dy = abs(end.y - start.y);
	d.sx = end.x - start.x > 0 ? 1 : -1;
	d.sy = end.y - start.y > 0 ? 1 : -1;
	d.dp = 0;
	while (start.y != end.y)
	{
		mlx_pixel_put(mlx.mlx_ptr, mlx.mlx_win, start.x, start.y, clr);
		start.y += d.sy;
		d.dp += d.dx;
		if (d.dp >= d.dy && start.x != end.x)
		{
			start.x += d.sx;
			d.dp -= d.dy;
		}
	}
	mlx_pixel_put(mlx.mlx_ptr, mlx.mlx_win, start.x, start.y, clr);
}

void	draw(t_mlx mlx, t_pixel start, t_pixel end)
{
	int	dx;
	int	dy;
	int	clr;

	start.x = start.x * mlx.zoom + mlx.x0;
	start.y = start.y * mlx.zoom + mlx.y0;
	end.x = end.x * mlx.zoom + mlx.x0;
	end.y = end.y * mlx.zoom + mlx.y0;
	start.z *= mlx.hooks.alt;
	end.z *= mlx.hooks.alt;
	mlx.hooks.proj ? iso(&start.x, &start.y, start.z) : 0;
	mlx.hooks.proj ? iso(&end.x, &end.y, end.z) : 0;
	clr = abs(end.z) - abs(start.z) > 0 ? abs(end.z) + 1 : abs(start.z) + 1;
	clr = 0xFF0F00 / clr;
	dx = abs(start.x - end.x);
	dy = abs(start.y - end.y);
	if (dx >= dy)
		draw_horizontaly(mlx, start, end, clr);
	else
		draw_verticaly(mlx, start, end, clr);
}

void	bresenham(t_mlx mlx)
{
	t_line	*tmp_line;
	int		i;

	tmp_line = mlx.list;
	mlx.x0 = (mlx.win_w - mlx.min * mlx.zoom) / 2 + mlx.hooks.move_x;
	mlx.y0 = (mlx.win_h - mlx.map_line * mlx.zoom) / 2 + mlx.hooks.move_y;
	while (tmp_line != NULL)
	{
		i = -1;
		while (++i < mlx.min)
		{
			if (i + 1 < mlx.min)
				draw(mlx, tmp_line->tab[i], tmp_line->tab[i + 1]);
			if (tmp_line->next)
				draw(mlx, tmp_line->tab[i], tmp_line->next->tab[i]);
		}
		tmp_line = tmp_line->next;
	}
}
