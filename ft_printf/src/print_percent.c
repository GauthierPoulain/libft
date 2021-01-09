/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 17:20:17 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/09 02:55:08 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static void	print_percent_zero(t_flags *flags, char c)
{
	print_width(flags->width, flags->zero, 1, flags);
	flags->print += ft_putchar_fd(c, flags->fd);
}

void		print_percent(t_flags *flags)
{
	if (flags->zero)
		print_percent_zero(flags, '%');
	else
		print_char(flags, '%');
}
