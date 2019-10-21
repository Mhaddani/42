/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <mhaddani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:01:03 by mhaddani          #+#    #+#             */
/*   Updated: 2019/10/21 12:34:13 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"

int	solve_fillit(int fd);
int		is_tet_valid(char *buff, char ***tets_tab);
int	is_touching(char *buff, int pos);
int	usage();

#endif