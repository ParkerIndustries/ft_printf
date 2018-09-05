/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:09:38 by smickael          #+#    #+#             */
/*   Updated: 2018/08/06 17:51:58 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nv;
	size_t	lensrc;
	size_t	lendst;

	nv = NULL;
	if (s1 && s2)
	{
		lensrc = ft_strlen(s1);
		lendst = ft_strlen(s2);
		nv = (char *)malloc((lensrc + lendst + 1) * sizeof(char));
		if (!nv)
			return (NULL);
		ft_bzero(nv, lensrc + lendst + 1);
		nv = ft_strcat(nv, s1);
		ft_strcat(&nv[lensrc], s2);
	}
	return (nv);
}
