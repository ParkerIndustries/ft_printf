/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:45:52 by smickael          #+#    #+#             */
/*   Updated: 2018/09/04 14:49:39 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ultoa(unsigned long n)
{
	char			*s;
	unsigned long	nb;
	int				len;

	len = 1;
	nb = n;
	while (nb > 9)
	{
		nb /= 10;
		++len;
	}
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	while (n > 9)
	{
		s[--len] = (n % 10) + 48;
		n /= 10;
	}
	s[--len] = n + 48;
	return (s);
}
