/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:18:12 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/23 01:07:20 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

int	keypress(int code, t_mlx *mlx)
{
	if (code == ESC)
	{
		mlx_clear_window(mlx->mlx_ptr, mlx->mlx_win);
		free_list(&mlx->list);
		exit(0);
	}
	code == MINUS && mlx->zoom > 1 ? mlx->zoom -= 3 : 0;
	code == PLUS ? mlx->zoom += 3 : 0;
	code == RIGHT ? mlx->hooks.move_x += 10 : 0;
	code == LEFT ? mlx->hooks.move_x -= 10 : 0;
	code == UP ? mlx->hooks.move_y -= 10 : 0;
	code == DOWN ? mlx->hooks.move_y += 10 : 0;
	code == H ? mlx->hooks.alt += 1 : 0;
	code == L ? mlx->hooks.alt -= 1 : 0;
	if (code == P)
		mlx->hooks.proj = mlx->hooks.proj ? 0 : 1;
	mlx_clear_window(mlx->mlx_ptr, mlx->mlx_win);
	bresenham(*mlx);
	menu(*mlx);
	return (1);
}
