/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:08:24 by smickael          #+#    #+#             */
/*   Updated: 2018/08/06 17:51:43 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;

	ret = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (ret)
	{
		i = 0;
		while (*s1)
			ret[i++] = *s1++;
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
