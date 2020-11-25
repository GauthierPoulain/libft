/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:09:24 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/25 11:10:27 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_getsize(int n)
{
	int		count;

	count = 0;
	if (n < 0)
		n *= -1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char *res;
	int		i;
	unsigned long tmp;

	if (!(res = malloc(sizeof(char) * (ft_itoa_getnumberlen(n) + 1))))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		res[i++] = '-';
		tmp = -(unsigned long)n;
	}
	else
		tmp = (unsigned long)n;
	ft_itoa_addchar(res, tmp);
	res[ft_itoa_getnumberlen(n)] = 0;
	return (res);
}
