/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:52:13 by mhaddani          #+#    #+#             */
/*   Updated: 2019/08/17 00:28:15 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define MAX_FD 4000
# define INLINE_IF(condition, ret) if(condition) return ret
# define BUFF_SIZE 1
# include "libft/libft.h"
# include <fcntl.h>

int get_next_line(const int fd, char **line);

#endif
