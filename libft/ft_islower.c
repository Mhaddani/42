/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:10:18 by mhaddani          #+#    #+#             */
/*   Updated: 2019/05/16 16:10:19 by mhaddani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(int c)
{
	if((unsigned char)c > 96 && (unsigned char)c < 123)
		return (1);
	return (0);
}
