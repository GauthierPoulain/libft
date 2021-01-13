/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_types.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:22:29 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/13 01:07:11 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

void		get_type(t_flags *flags, va_list lst)
{
	if (flags->type == 'c')
		print_char(flags, va_arg(lst, int));
	else if (flags->type == 's')
		print_string(flags, va_arg(lst, char *));
	else if (flags->type == 'p')
		print_pointer(flags, va_arg(lst, size_t));
	else if (flags->type == 'd' || flags->type == 'i')
		print_int(flags, va_arg(lst, int));
	else if (flags->type == 'u')
		print_unsigned(flags, va_arg(lst, unsigned int));
	else if (flags->type == 'x' || flags->type == 'X')
		print_base(flags, 16, va_arg(lst, unsigned int), flags->type == 'X');
	else if (flags->type == 'o' || flags->type == 'O')
		print_base(flags, 8, va_arg(lst, unsigned int), flags->type == 'O');
	else if (flags->type == '%')
		print_percent(flags);
	else if (flags->type == 'f')
		print_double(flags, va_arg(lst, double));
}
