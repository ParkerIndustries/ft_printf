/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:24:52 by smickael          #+#    #+#             */
/*   Updated: 2018/08/06 17:53:04 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	void	*frais;
	int		i;

	i = 0;
	frais = (void *)malloc(size + 1);
	if (frais == 0)
		return ((char *)frais);
	else
		ft_bzero(frais, size + 1);
	return ((char *)frais);
}
