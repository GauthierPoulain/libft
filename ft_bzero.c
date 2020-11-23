/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:37:42 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/23 17:33:26 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	unsigned char	*casts;

	casts = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		casts[i] = 0;
		i++;
	}
}
