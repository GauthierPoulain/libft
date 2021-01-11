/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endwith.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 04:39:43 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/11 06:02:16 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_endwith(char *str, char *end)
{
	size_t lenstr;
	size_t lenend;

	if (!str || !end)
		return (0);
	lenstr = ft_strlen(str);
	lenend = ft_strlen(end);
	if (lenend > lenstr)
		return (0);
	return (ft_strncmp(str + lenstr - lenend, end, lenend) == 0);
}
