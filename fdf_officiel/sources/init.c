/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:18:12 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/23 01:00:17 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

void	init_hooks(t_hooks *hooks)
{
	hooks->proj = 0;
	hooks->alt = 1;
	hooks->move_x = 0;
	hooks->move_y = 0;
}

void	init(t_mlx *mlx, char *title)
{
	mlx->zoom = 40;
	while (mlx->min * mlx->zoom * 3 > MAX_WIDTH &&\
			mlx->map_line * mlx->zoom * 3 > MAX_HEIGHT)
		mlx->zoom -= 1;
	mlx->win_w = mlx->min * mlx->zoom * 3;
	mlx->win_h = mlx->map_line * mlx->zoom * 3;
	mlx->win_w < MIN_WIDTH ? mlx->win_w = MIN_WIDTH : 0;
	mlx->win_h < MIN_HEIGHT ? mlx->win_h = MIN_HEIGHT : 0;
	mlx->win_w > MAX_WIDTH ? mlx->win_w = MAX_WIDTH : 0;
	mlx->win_h > MAX_HEIGHT ? mlx->win_h = MAX_HEIGHT : 0;
	init_hooks(&mlx->hooks);
	mlx->mlx_ptr = mlx_init();
	mlx->mlx_win = mlx_new_window(mlx->mlx_ptr, mlx->win_w,\
			mlx->win_h, title);
}
