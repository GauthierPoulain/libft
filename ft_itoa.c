/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:09:24 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/25 16:41:04 by gapoulai         ###   ########lyon.fr   */
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

char		*ft_itoa(int n)
{
	char		*res;
	int			count;
	int			i;
	long int	tmp;

	tmp = n;
	count = ft_itoa_getsize(n);
	if (tmp < 0 || count == 0)
		count++;
	if (!(res = ft_calloc(1, count + 1)))
		return (NULL);
	i = 0;
	if (tmp < 0)
	{
		tmp *= -1;
		res[i++] = '-';
	}
	while (count > i)
	{
		res[--count] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (res);
}
