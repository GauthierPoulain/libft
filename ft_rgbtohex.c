/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgbtohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:20:50 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/16 09:21:09 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_rgbtohex(int r, int g, int b)
{
	char	*res;

	res = ft_strdup("");
	if (r < 16)
		res = ft_strjoinf1(res, "0");
	res = ft_strjoinf1(res, ft_itoa_base(r, 16));
	if (g < 16)
		res = ft_strjoinf1(res, "0");
	res = ft_strjoinf1(res, ft_itoa_base(g, 16));
	if (b < 16)
		res = ft_strjoinf1(res, "0");
	res = ft_strjoinf1(res, ft_itoa_base(b, 16));
	return (ft_atoi_base(res, 16));
}
