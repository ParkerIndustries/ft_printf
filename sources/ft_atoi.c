/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:50:51 by smickael          #+#    #+#             */
/*   Updated: 2018/08/06 17:47:34 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char *str)
{
	int			nega_pos;
	long long	res;

	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' && (nega_pos = -1))
		str++;
	else if ((nega_pos = 1) && *str == '+' && (str++))
		;
	if (!ft_isdigit(*str))
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str) && (str++))
			break ;
		if ((*str - '0') > 9)
			break ;
		res = (10 * res) + (*str - '0');
		if (res < 0)
			return (0);
		str++;
	}
	return (int)(nega_pos * res);
}
