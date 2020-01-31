/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 17:01:35 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/23 00:49:38 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include <fcntl.h>
# include <math.h>
# include "mlx.h"

# define MAX_WIDTH 1920
# define MAX_HEIGHT 1080
# define MIN_WIDTH 600
# define MIN_HEIGHT 600
# define ESC 53
# define PLUS 69
# define MINUS 78
# define UP 126
# define DOWN 125
# define RIGHT 124
# define LEFT 123
# define H 116
# define L 121
# define P 35

typedef struct s_pixel	t_pixel;
typedef struct s_line	t_line;
typedef struct s_draw	t_draw;
typedef struct s_mlx	t_mlx;
typedef	struct s_hooks	t_hooks;

struct			s_pixel
{
	int		x;
	int		y;
	int		z;
};

struct			s_line
{
	t_pixel	*tab;
	t_line	*next;
};

struct			s_draw
{
	int	dy;
	int	dx;
	int	sx;
	int	sy;
	int	dp;
};

struct			s_hooks
{
	int	proj;
	int	alt;
	int	move_x;
	int	move_y;
};

struct			s_mlx
{
	t_line	*list;
	int		min;
	int		map_line;
	int		x0;
	int		y0;
	int		win_h;
	int		win_w;
	void	*mlx_ptr;
	void	*mlx_win;
	int		zoom;
	t_hooks	hooks;
};

int				check(int fd, int *map_line);
int				errors(int error);
void			free_tab(char ***leak);
void			print(t_line *list, int min);
t_line			*store(int fd, int min);
void			bresenham(t_mlx mlx);
void			init(t_mlx *mlx, char *title);
void			free_list(t_line **list);
int				keypress(int code, t_mlx *mlx);
void			menu(t_mlx mlx);

#endif
