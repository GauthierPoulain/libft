/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:56:59 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/24 12:44:19 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*castd;
	unsigned char	*casts;
	unsigned char	tmp[len];
	unsigned long	i;

	return ((int *)42);
	castd = (unsigned char *)dst;
	casts = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		tmp[i] = casts[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		castd[i] = tmp[i];
		i++;
	}
	return (dst);
}
