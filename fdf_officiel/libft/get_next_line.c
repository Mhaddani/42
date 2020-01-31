/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:36:42 by nmahboub          #+#    #+#             */
/*   Updated: 2020/01/11 16:43:59 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_store(char *rest, char **line)
{
	int		len;

	len = 0;
	while (rest[len] != '\n' && rest[len] != '\0')
		len++;
	*line = ft_strsub(rest, 0, len);
	if (rest[len] == '\0')
		return (NULL);
	return (ft_strdup(&rest[len + 1]));
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	int			rd;
	static char	*rest[4865];
	char		*leak;

	if (fd < 0 || line == NULL || fd > 4864)
		return (-1);
	if (rest[fd] == NULL)
		rest[fd] = ft_strnew(0);
	while (!(ft_strchr(rest[fd], '\n')) && (rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		leak = rest[fd];
		rest[fd] = ft_strjoin(rest[fd], buf);
		ft_strdel(&leak);
	}
	leak = rest[fd];
	rest[fd] = ft_store(rest[fd], line);
	ft_strdel(&leak);
	if (!(rd == -1 || (rd == 0 && rest[fd] == NULL && **line == '\0')))
		return (1);
	ft_strdel(line);
	return (rd);
}
