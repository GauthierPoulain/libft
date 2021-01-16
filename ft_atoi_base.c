/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:25:17 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/16 09:11:07 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	base(int c, int base)
{
	char	*str;
	int		i;

	str = ft_strdup("0123456789abcdef");
	i = 0;
	while (i < base)
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int			ft_atoi_base(char *str, int str_base)
{
	int	nb;
	int	neg;
	int	i;

	nb = 0;
	neg = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (base(str[i], str_base) != -1)
	{
		nb = nb * str_base;
		nb = nb + base(str[i], str_base);
		i++;
	}
	if (neg)
		return (-nb);
	return (nb);
}
