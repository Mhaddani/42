/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 16:35:04 by mhaddani          #+#    #+#             */
/*   Updated: 2020/01/14 16:35:29 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/fdf.h"

void	invalid_file_usage()
{
	ft_putstr("The file is invalid");
}

void	invalid_connection_usage()
{
	ft_putstr("The connection between your software \
	and the X-server cannot be established");
}

void	invalid_argument_usage()
{
	ft_putstr("usage: fdf input_file\n  input_file: the file containing the map");
}

int		main(int ac, char **av)
{
	void	*con;
	void	*wind_id;
	int		*dms;
	int		*wind_dms;
	
	wind_dms = (int *)malloc(sizeof(int) * 6);
	ft_memset(wind_dms, 0, 6);
	wind_dms[0] = 1000;
	wind_dms[1] = 1000;
	if (ac == 2 && (av[1] != NULL))
	{
		if ((con = mlx_init()))
		{
			if ((wind_id = mlx_new_window(con, wind_dms[0], wind_dms[1], "This is my first window")))
			{
				if (!(dms = checker(av[1])))
					invalid_file_usage();
				else
				{
					process(av[1], dms, con, wind_id, wind_dms);
					
					mlx_loop(con);
				}
			}
			else
				ft_putstr("The window cannot be created");
		}
		else
			invalid_connection_usage();
	}
	else
		invalid_argument_usage();
	return (0);
}
