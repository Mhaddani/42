/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:51:09 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/18 20:34:45 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
	char BUFF[BUFF_SIZE + 1];
	static char *rest;
	int r_size;
	int lb_pos;
	//char *joined_str;
	//t_bool is_lb;

	if (!(rest))
		rest = ft_strnew(0);
	while ((r_size = read(fd, BUFF, BUFF_SIZE)))
	{
		BUFF[r_size] = '\0';
		if ((lb_pos = ft_strchrpos(BUFF, '\n')) >= 0)
		{
			rest = ft_strjoin(rest, ft_strsub(BUFF, 0, lb_pos - 1));
			printf("%s",rest);
			line = &rest;
			return (1);
		}
		else
		{
			rest = ft_strjoin(rest, ft_strsub(BUFF, 0, lb_pos - 1));
			line = &rest;
			get_next_line(fd, line);
		}
	}
	if (r_size == 0)
	{
		//printf("*%s\n\n*", BUFF);
		//printf("%zu\n\n", r_size);
		// int i = 0;
		// while (line[i])
		// 	{
		// 		printf("%s", line[i]);
		// 		i++;
		// 	}
			//printf("SALLUUUUUUTUTUTUT\n\n");
		return (0);
	}
	else
		return (-1);
	











	// while ((r_size = read(fd, BUFF, 2)))
	// {
	//     BUFF[r_size] = '\0';
	//     if (pt = ft_strchr(BUFF, '\n'))
	//     {
	//         if (pt == 0)
	//             get_next_line(fd, &pt + 1);
	//         else
	//         {
	//             str = ft_strsub(BUFF, 0, pt - 1);
	//             res = ft_strjoin(res, BUFF);
	//             get_next_line(fd, &pt + 1);
	//         }
	//     }
		
		

	// }

	
	
	// return (0);
}

int main()
{
	char *line;
	int fd = open("test.txt", O_RDONLY);
	printf("%d", get_next_line(fd, &line));
	return 0;
}
