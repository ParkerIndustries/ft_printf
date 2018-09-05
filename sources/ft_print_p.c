/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:22:06 by smickael          #+#    #+#             */
/*   Updated: 2018/09/05 16:48:59 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptraddr_width(t_env *op)
{
	int	len;

	op->flags.width = op.flags.width - 1;
	len = ft_strlen(op->out);
	while (--op->flags.width > len)
		op->ret += op->flags.zero = 1 ? write(1, "0", 1) : write(1, " ", 1);
}

void	ft_print_ptraddr(t_env *op, char type)
{
	if (op->flags.zero && op->flags.accuracy == -1)
		op->flags.accuracy = op->flags.width - 2;
	if (type == 'p')
		ft_strtolower(op->out);
	if (op->flags.minus)
	{
		op->ret += write(1, op->out, ft_strlen(op->out));
		ft_print_ptraddr_width(op);
	}
	else
	{
		ft_print_ptraddr_width(op);
		op->ret += write(1, op->out, ft_strlen(op->out));
	}
	++op->i;
	free(op->out);
}
