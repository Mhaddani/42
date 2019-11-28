/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:43:41 by danas             #+#    #+#             */
/*   Updated: 2019/11/20 15:26:04 by danas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

typedef struct	s_size
{
	int	x_min;
	int x_max;
	int y_min;
	int y_max;

}				t_size;

int				checker(char *str);
t_size			*v(char *str);
char			*string_resize(char *str, t_size *my_size, char a);
int				high_sqrt(int n);
char			*squar_string(int side);
int				solve(t_list *lst, char *str, int i, int side);
void			free_list(t_list *lst);
int				check_place(char *buff, char *str, int k, int side);
void			set_in_place(char *buff, char *str, int k, int side);
void			remove_tetri(char *str, char val);
char			get_val(t_list *list);
int				check_all_place(char *buff, char *str, int i, int side);
int				check(char *str, int step);
#endif
