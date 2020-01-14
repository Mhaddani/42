/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:16:46 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/14 16:32:35 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libs/get_next_line/get_next_line.h"
# include <mlx.h>
# include <sys/stat.h>
# include <math.h>

int		*checker(char *av);
int		process(char *av, int *dms, void *con, int *wind_id, int *wind_dms);
void	bresenham(int x0, int y0, int x1, int y1, int *img_data, int size_ln, int color);

#endif
