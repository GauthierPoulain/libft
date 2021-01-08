/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 07:15:23 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/08 07:16:46 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ctos(char c)
{
	char	*res;

	res = ft_calloc(2, sizeof(char));
	if (!res)
		return (NULL);
	res[0] = c;
	return (res);
}
