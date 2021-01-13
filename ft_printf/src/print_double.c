/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 08:35:37 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/13 01:24:19 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static double dmod(double x, double y)
{
	return (x - (int)(x / y) * y);
}

static void	print_unit(t_flags *flags, double nb)
{
	flags->print += ft_putnbr_fd((int)(nb - dmod(nb, 1)),
	flags->fd);
}

static void	print_decimal(t_flags *flags, double nb)
{
	int		tmp;

	tmp = (nb - (nb -dmod(nb, 1))) * ft_math_power(10, flags->dot);
	flags->print += ft_putnbr_fd(tmp, flags->fd);
}

void		print_double(t_flags *flags, double nb)
{
	print_unit(flags, nb);
	if (flags->has_dot && flags->dot > 0)
	{
		flags->print += ft_putchar_fd('.', flags->fd);
		print_decimal(flags, nb);
	}
}