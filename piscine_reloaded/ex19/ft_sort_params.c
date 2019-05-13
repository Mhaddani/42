/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:27:45 by mhaddani          #+#    #+#             */
/*   Updated: 2019/04/06 22:01:55 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		str_cmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	print_params(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
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

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	if (ac > 0)
	{
		j = 1;
		while (j < ac)
		{
			i = 1;
			while (i < ac)
			{
				if (str_cmp(av[i - 1], av[i]) > 0)
				{
					tmp = av[i - 1];
					av[i - 1] = av[i];
					av[i] = tmp;
				}
				i++;
			}
			j++;
		}
		print_params(ac, av);
	}
	return (0);
}
