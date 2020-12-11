/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:25:17 by gapoulai          #+#    #+#             */
/*   Updated: 2020/12/11 12:31:49 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_base(char *base)
{
	int		i;
	int		j;

	i = -1;
	j = 1;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == '\r'
			|| base[i] == '\v' || base[i] == '\t' || base[i] == '\f'
			|| base[i] == ' ')
			return (0);
		while (base[i + j] != '\0')
			if (base[i] == base[i + j++])
				return (0);
		j = 1;
	}
	return (1);
}

static int		is_in_base(char c, char *base)
{
	int		i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (1);
	return (0);
}

static int		int_from_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int				ft_atoi_base(char *str, char *base)
{
	int		res;
	int		i;
	int		neg;

	res = 0;
	i = 0;
	neg = 1;
	if (!check_base(base))
		return (0);
	while (str[i] == '\r' || str[i] == '\v' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\n' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg *= -1;
	while (is_in_base(str[i], base))
		res = res * ft_strlen(base) + int_from_base(str[i++], base);
	return (res * neg);
}
