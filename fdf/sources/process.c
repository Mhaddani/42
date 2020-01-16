/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:37:11 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/15 19:49:23 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fdf.h"

static int	*iso(int *x, int *y, int z)
{
	int previous_x;
	int previous_y;
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 2);
	previous_x = x;
	previous_y = y;
	tab[0] = (previous_x - previous_y) * cos(0.523599);
	tab[1] = -z + (previous_x + previous_y) * sin(0.523599);
	return (tab);
}

int		**store(char *av, int *dms)
{
	char	*line;
	int		**tab;
	char	**res;

	dms[3] = 0;
	dms[4] = 0;
	dms[2] = open(av, O_RDONLY);
	tab = (int **)malloc(sizeof(int*) * dms[0]);
	while (get_next_line(dms[2], &line))
	{
		dms[3] = -1;
		tab[dms[4]] = (int *)malloc(sizeof(int) * dms[1]);
		res = ft_strsplit(line, ' ');
		while (res[++dms[3]])
			tab[dms[4]][dms[3]] = ft_atoi(res[dms[3]])[0];
		dms[4]++;
	}
	dms[3] = 0;
	dms[4] = 0;
	return (tab);
}

// int		**tab_cp_f(int **tab, int *dms)
// {
// 	int		**tab_cp;

// 	dms[3] = 0;
// 	tab_cp = (int **)malloc(sizeof(int) * dms[0]);
// 	while (dms[3] < dms[0])
// 	{
// 		dms[4] = 0;
// 		tab_cp[dms[3]] = (int *)malloc(sizeof(int) * dms[1]);
// 		while (dms[4] < dms[1])
// 		{
// 			tab_cp[dms[3]][dms[4]] = tab[dms[3]][dms[4]];
// 			dms[4]++;
// 		}
// 		dms[3]++;
// 	}
// 	dms[3] = 0;
// 	dms[4] = 0;
// 	return (tab_cp);
// }

int		*turn_to_iso(int *dms, int *img_data, int **tab, int size_ln)
{
	int		*new_cd;
	
	dms[3] = 0;
	while (dms[3] < dms[0])
	{
		dms[4] = 0;
		while (dms[4]< dms[1])
		{
			new_cd = iso(dms[4], dms[3], tab[dms[3]][dms[4]]);
			if (tab[dms[3]][dms[4]] != 0)
				img_data[(5 * new_cd[0] * 4) + 200 + (5 * size_ln * new_cd[1])] = 0xFF0F00;
			else
				img_data[(5 * new_cd[0] * 4) + 200 + (5 * size_ln * new_cd[1])] = 0xFFFFFF;
			dms[4]++;
		}
		dms[3]++;
	}
	return (new_cd);
}

int		process(char *av, int *dms, void *con, int *wind_id, int *wind_dms)
{
	void	*img_id;
	int		*img_data;
	int		bpp;
	int		size_ln;
	int		end;
	int		**tab;
	int		growth;
	// int		**tab_cp;

	growth = 1;
	dms[4] = 0;
	dms[3] = 0;
	wind_dms[2] = wind_dms[0] - (wind_dms[0] * 40) / 100;
	wind_dms[3] = wind_dms[1] - (wind_dms[1] * 40) / 100;
	img_id = mlx_new_image(con, wind_dms[2], wind_dms[3]);
	img_data = (int *)mlx_get_data_addr(img_id, &bpp, &size_ln, &end);
	tab = store(av, dms);
	turn_to_iso(dms, img_data, tab, size_ln);
	// while (1)
	// {
		
		// else
		// 	break;
	// }

	//tab_cp = tab_cp_f(tab, dms);
	

	// dms[3] = 0;
	// dms[4] = 0;
	// while (dms[3] < 999)
	// {
	// 	dms[4] = 0;
	// 	while (dms[4] < 999)
	// 	{
	// 		img_data[(dms[4]) + (size_ln/4 * dms[3])] = 0xFFFFFF;
	// 		dms[4]++;
	// 	}
	// 	dms[3]++;
	// }

	// dms[3] = 0;
	// while (dms[3] < dms[0])
	// {
	// 	dms[4] = 0;
	// 	while (dms[4] < dms[1])
	// 	{
	// 		printf("%d\t", tab[dms[3]][dms[4]]);
	// 		dms[4]++;
	// 	}
	// 	printf("\n");
	// 	dms[3]++;
	// }


	// dms[3] = 0;
	// while (dms[3] < dms[0])
	// {
	// 	dms[4] = 0;
	// 	while (dms[4] < dms[1])
	// 	{
	// 		if (tab[dms[3]][dms[4]] != 0)
	// 			img_data[(dms[4] * 30) + (size_ln * 8 * dms[3])] = 0xFF0F00;
	// 		else
	// 			img_data[(dms[4] * 30) + (size_ln * 8 * dms[3])] = 0xFFFFFF;
	// 		dms[4]++;
	// 	}
	// 	dms[3]++;
	// }
	
	// int		get_color(char *val)
	// {
	// 	char	**res;

	// 	if (res = ft_strsplit(val, ','))
	// 	{
			
	// 	}
	// }

	// int i;
	// int j;
	// i = j = 0;
	// while (i < wind_dms[2])
	// {
	// 	j = 0;
	// 	while (j < wind_dms[3])
	// 	{
	// 		img_data[i + size_ln/4 * j] = 0x52595e;
	// 		j++;
	// 	}
	// 	i++;
	// }
	
	int *new_cd;
	
	if (wind_dms[2] / dms[1] > wind_dms[3] / dms[0])
		growth = wind_dms[3] / dms[0];
	else
		growth = wind_dms[2] / dms[1];
	int plus_x, plus_y;
	plus_x = plus_y = 0;
	plus_x = (wind_dms[2] - ((dms[1] - 1) * growth)) / 2;
	plus_y = (wind_dms[3] - ((dms[0] - 1) * growth)) / 2;

	// printf("%d\t%d\n", plus_x, plus_y);
	while (dms[3] < dms[0])
	{
		dms[4] = 0;
		while (dms[4] < dms[1])
		{
			new_cd = iso(dms[4], dms[3], tab[dms[3]][dms[4]]);
			if (tab[dms[3]][dms[4]] != 0)
			{
				if (dms[4] + 1 < dms[1])
				{
					if (tab[dms[3]][dms[4] + 1] != 0)
						bresenham(dms[4] * growth + plus_x, dms[3] * growth + plus_y, (dms[4] + 1) * growth + plus_x, dms[3] * growth + plus_y, img_data, size_ln, 0xFF0F00);
					else
						bresenham(dms[4] * growth + plus_x, dms[3] * growth + plus_y, (dms[4] + 1) * growth + plus_x, dms[3] * growth + plus_y, img_data, size_ln, 0xF00000);
				}
				if (dms[3] + 1 < dms[0])
				{
					if (tab[dms[3] + 1][dms[4]] != 0)
						bresenham(dms[4] * growth + plus_x, dms[3] * growth + plus_y, dms[4] * growth + plus_x, (dms[3] + 1) * growth + plus_y, img_data, size_ln, 0xFF0F00);
					else
						bresenham(dms[4] * growth + plus_x, dms[3] * growth + plus_y, dms[4] * growth + plus_x, (dms[3] + 1) * growth + plus_y, img_data, size_ln, 0xFFFFFF);
				}
			}
			else
			{
				if (dms[4] + 1 < dms[1])
					bresenham(dms[4] * growth + plus_x, dms[3] * growth + plus_y, (dms[4] + 1) * growth + plus_x, dms[3] * growth + plus_y, img_data, size_ln, 0xFFFFFF);
				if (dms[3] + 1 < dms[0])
					bresenham(dms[4] * growth + plus_x, dms[3] * growth + plus_y, dms[4] * growth + plus_x, (dms[3] + 1) * growth + plus_y, img_data, size_ln, 0xFFFFFF);
			}
			dms[4]++;
		}
		dms[3]++;
	}

	// mlx_key_hook (wind_id , (int *)turn_to_iso(dms, img_data, tab), *param );
	// ((1000-1000)/2)
	mlx_put_image_to_window(con, wind_id, img_id, (wind_dms[0] - wind_dms[2])/2, (wind_dms[1] - wind_dms[3])/2);
	return (0);
}
