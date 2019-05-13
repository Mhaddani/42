/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:05:42 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/05 17:26:20 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	if (ac >= 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}
