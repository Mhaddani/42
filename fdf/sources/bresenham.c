/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:07:20 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/14 22:24:34 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"
#include <math.h>

void	bresenham(int x0, int y0, int x1, int y1, int *img_data, int size_ln, int color) 
{
	int dx = abs(x1-x0);
	int sx = x0 < x1 ? 1 : -1;
	int dy = abs(y1-y0);
	int sy = y0 < y1 ? 1 : -1; 
	int err = (dx > dy ? dx : -dy)/2;
	int e2;
 
	while (1)
	{
		img_data[x0 + size_ln/4 * y0] = color;
		if (x0 == x1 && y0==y1)
			break;
		e2 = err;
		if (e2 >- dx)
		{
			err -= dy;
			x0 += sx;
		}
		if (e2 < dy)
		{
			err += dx;
			y0 += sy;
		}
	}
}

// 	int dx = x2 - x1;
// 	int dy = y2 - y1;
// 	int drawnX, drawnY;
// 	int stepX = 0;
// 	int stepY = 0;
// 	int acm = 0;
// 	drawnX = 0;
// 	drawnY = 0;

// 	if (dx > 0)
// 		stepX = 1;
// 	else
// 		stepX = -1;

// 	if (dy > 0)
// 		stepY = 1;
// 	else
// 		stepY = -1;

// 	if (abs(dx) > abs(dy))
// 	{
// 		drawnX = x1;
// 		drawnY = y1;
// 		acm = 0;
// 		img_data[drawnX + size_ln/4 * drawnY] = 0xFFFFFF;
// 	}
// 	while (drawnX != x2 && drawnY != y2)
// 	{
// 		drawnX = drawnX + stepX;
// 		acm = acm + abs(dy);
// 		if (acm >= abs(dx))
// 		{
// 			drawnY = drawnY + stepY;
// 			acm = acm - dx;
// 		}
// 		img_data[drawnX + size_ln/4 * drawnY] = 0xFF0F00;
// 	}
// }

// int deltaX = x1 - x0;
// int deltaY = y1 - y0;
// int p = 2 * deltaY - deltaX;
// int drawnX, drawnY;
// drawnX = drawnY= 0;

// while ()
// {
// 	if (p > 0)
// 	{
// 		drawnX += 1;
// 	}
// 	else
// 	{
// 		drawnY += 1; 
// 	}
// }

 

	
	
	
	
	
	
// 	int steep;
	
// 	steep = (abs(y1-y0) > abs(x1-x0));
// 	if (steep) {
// 		int temp;
// 		temp = y0; y0 = x0; x0 = temp;
// 		temp = y1; y1 = x1; x1 = temp;
// 	}
// 	int deltax = abs(x1-x0);
// 	// int deltay = abs(y1-y0);
// 	if (deltax <= 1) {
// 		if (steep) {
// 			img_data[y0 + size_ln/4 * x0] = 0xFFFFFF;
// 			img_data[y1 + size_ln/4 * x1] = 0xFFFFFF;
// 		}
// 		else
// 		{
// 			img_data[x0 + size_ln/4 * y0] = 0xFFFFFF;
// 			img_data[x1 + size_ln/4 * y1] = 0xFFFFFF;
// 		}
// 	}
// 	int currentx = x0;
// 	int currenty = y0;
// 	int xinc = x0 < x1 ? 1 : -1;
// 	int error = 0;
// 	int yinc = (y1 - y0) / (deltax);
// 	while (currentx != x1) {
// 		if (steep)
// 			img_data[currenty + size_ln/4 * currentx] = 0xFFFFFF;
// 		else
// 			img_data[currentx + size_ln/4 * currenty] = 0xFFFFFF;
// 		currentx += xinc;
// 		error += yinc;
// 		if (error >= 0.5) {
// 			currenty += 1;
// 			error -= 1;
// 		} else if (error < 0.5) {
// 			error += 1;
// 		}
// 	}
// 	if (steep)
// 		img_data[y0 + size_ln/4 * x0] = 0xFFFFFF;
// 	else
// 		img_data[x0 + size_ln/4 * y0] = 0xFFFFFF;
// }



