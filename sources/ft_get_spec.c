/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_spec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 17:54:03 by smickael          #+#    #+#             */
/*   Updated: 2018/09/05 17:51:43 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_spec_base(t_env *op, char type)
{
	long			tmp;
	unsigned long	val;

	val = 0;
	tmp = va_arg(op->ap, long);
	if (op->mod == pf_hh)
		val = (unsigned char)tmp;
}

void	ft_spec_int(t_env *op)
{
	long	tmp;
	long	i;

	tmp = va_arg(op->ap, long);
	i = (long long)tmp;
	op->flags.minus == 1 ? op->flags.zero = 0 : 0;
	op->flags.press >= 0 ? op->flags.zero = 0 : 0;
	if (tmp == LLONG_MIN || tmp == LONG_MIN)
		op->out = ft_strdup("-9223372036854775808");
	else if (op->mod == pf_hh)
		op->out = ft_itoa((char)i);
	else if (op->mod == pf_h)
		op->out = ft_itoa((short)i);
	else if (op->mod == pf_nomod)
		op->out = ft_itoa((int)i);
	else if (op->mod == pf_l || op->mod == pf_ll ||
			op->mod == pf_j)
		op->out = ft_ltoa((long)i);
	ft_print(op);
}
