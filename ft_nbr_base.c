/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:19:38 by gapoulai          #+#    #+#             */
/*   Updated: 2020/12/11 12:49:54 by gapoulai         ###   ########lyon.fr   */
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

char			*ft_nbr_base(int nb, char *base)
{
	long		n;
	int			i;
	int			base_len;
	char		*res;

	res = malloc(2096 * sizeof(char));
	n = nb;
	nb = (n < 0 ? -1 : 1);
	n *= nb;
	i = 0;
	base_len = ft_strlen(base);
	while (base[base_len])
		base_len++;
	if (check_base(base) && base_len > 1)
		while (n || i == 0)
		{
			res[i++] = base[n % base_len];
			n = n / base_len;
			res[i] = '\0';
		}
	if (nb < 0)
		res[i++] = '-';
	res[i] = '\0';
	ft_rev_tab(res);
	return (res);
}
