/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:39:55 by smickael          #+#    #+#             */
/*   Updated: 2018/09/05 17:55:39 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_flag(t_flags *flags)
{
	flags->hash = 0;
	flags->zero = 0;
	flags->minus = 0;
	flags->plus = 0;
	flags->space = 0;
	flags->negative = 0;
	flags->accuracy = 0;
}


