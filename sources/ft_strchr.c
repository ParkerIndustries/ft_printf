/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:06:10 by smickael          #+#    #+#             */
/*   Updated: 2018/08/06 17:50:52 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (const char)c && *str != '\0')
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
