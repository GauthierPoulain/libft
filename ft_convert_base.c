/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:17:14 by gapoulai          #+#    #+#             */
/*   Updated: 2020/12/11 12:31:58 by gapoulai         ###   ########lyon.fr   */
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

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (check_base(base_from) == 1 && check_base(base_to) == 1)
		return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
	return (NULL);
}
