/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:17:59 by smickael          #+#    #+#             */
/*   Updated: 2018/08/08 16:37:51 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ltoa(long n)
{
	char	*s;
	long	nb;
	int		len;

	len = 1;
	n < 0 ? ++len : 0;
	nb = n < 0 ? -n : n;
	while (nb > 9)
	{
		nb /= 10;
		++len;
	}
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	n < 0 ? *s = '-' : 0;
	n < 0 ? n = -n : 0;
	while (n > 9)
	{
		s[--len] = (n % 10) + 48;
		n /= 10;
	}
	s[--len] = n + 48;
	return (s);
}
