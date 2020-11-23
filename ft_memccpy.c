/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:36:12 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/23 17:53:45 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	char			*castd;
	const char		*casts;

	castd = dst;
	casts = src;
	i = 0;
	while (i < n && *casts != c)
	{
		castd[i] = casts[i];
		i++;
	}
	if (n)
		return (&casts[i + 1]);
	else
		return (NULL);
}
