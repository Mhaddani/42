/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmahboub <nmahboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:32:23 by nmahboub          #+#    #+#             */
/*   Updated: 2020/01/23 00:51:17 by nmahboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFF_SIZE 100

void			ft_putchar(char c);
void			ft_putstr(char const *s);
size_t			ft_strlen(const char *s);
int				ft_atoi(const char *str);
void			*ft_memalloc(size_t size);
char			*ft_strdup(const char *str);
void			ft_putendl(char const *s);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strchr(const char *s, int c);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
char			*ft_strsub(char const *s, unsigned int	start, size_t len);
char			**ft_strsplit(char const *s, char c);
int				ft_countword(char const *s, char c);
void			ft_memdel(void **ap);
void			ft_bzero(void *s, size_t n);
size_t			ft_strcspn(const char *s1, const char *s2);
int				get_next_line(const int fd, char **line);
#endif
