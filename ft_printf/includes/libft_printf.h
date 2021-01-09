/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 18:58:25 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/09 02:42:09 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../../libft.h"

# define CHARSET "cspdiuxXoO%"

typedef struct	s_flags
{
	int			print;
	int			zero;
	int			star;
	int			minus;
	int			dot;
	int			has_dot;
	int			width;
	char		type;
	int			len;
	int			space;
	int			fd;
}				t_flags;

int				parse_flags(t_flags *flags, va_list lst, char *s);
int				parse_dot(char *s, t_flags *flags, va_list lst);
void			parse_minus(t_flags *flags);
void			parse_star(va_list lst, t_flags *flags);
void			parse_digit(char c, t_flags *flags);

void			init_flags(t_flags *flags, int fd);
void			reset_flags(t_flags *flags);

void			get_type(t_flags *flags, va_list lst);

void			print_width(int width, int i, int zero, t_flags *flags);
void			print_spaces(t_flags *flags, char *str);

void			print_char(t_flags *flags, char c);
void			print_string(t_flags *flags, char *str);
void			print_pointer(t_flags *flags, size_t adr);
void			print_unsigned(t_flags *flags, unsigned int nbr);
void			print_base(t_flags *flags, int base, unsigned int nbr,
int caps);
void			print_percent(t_flags *flags);

void			print_int(t_flags *flags, int nb);
void			int_print_dot(t_flags *flags, int nb, char *str);

#endif
