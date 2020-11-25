/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:57:17 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/25 16:43:46 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (!count || !size || !(ptr = malloc(sizeof(char) * (count * size))))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
