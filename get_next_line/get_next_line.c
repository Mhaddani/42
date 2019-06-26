/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:51:09 by mhaddani          #+#    #+#             */
/*   Updated: 2019/06/26 14:59:14 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*rest[MAX_FD];
	int			r_size;
	int			lb_pos;
	char		*tmp;

	lb_pos = -1;
	INLINE_IF((fd < 0 || line == NULL || MAX_FD < fd), -1);
	if (!(rest[fd]))
		rest[fd] = ft_strnew(0);
	while ((r_size = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[r_size] = '\0';
		tmp = rest[fd];
		rest[fd] = ft_strjoin(rest[fd], buff);
		ft_strdel(&tmp);
		if ((lb_pos = ft_strchrpos(rest[fd], '\n')) >= 0)
			break ;
	}
	if ((lb_pos = ft_strchrpos(rest[fd], '\n')) >= 0)
	{
		*line = ft_strsub(rest[fd], 0, lb_pos);
		tmp = rest[fd];
		rest[fd] = ft_strdup(ft_strchr(rest[fd], '\n') + 1);
		ft_strdel(&tmp);
	}
	else
	{
		*line = ft_strdup(rest[fd]);
		ft_strdel(&rest[fd]);
	}
	if (r_size < 1 && !rest[fd] && **line == '\0')
	{
		ft_strdel(line);
		return (r_size);
	}
	else
		return (1);
}
