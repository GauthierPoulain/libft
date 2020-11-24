/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:57:17 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/24 15:02:57 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_bzero_calloc(void *s, size_t n)
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

void		*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (!count || !size || !(ptr = malloc(count * size)))
		return (NULL);
	ft_bzero_calloc(ptr, count * size);
	return (ptr);
}
