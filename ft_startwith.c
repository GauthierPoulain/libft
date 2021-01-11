/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startwith.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 06:00:15 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/11 06:02:04 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_startwith(char *str, char *start)
{
	size_t lenstr;
	size_t lenstart;

	if (!str || !start)
		return (0);
	lenstr = ft_strlen(str);
	lenstart = ft_strlen(start);
	if (lenstart > lenstr)
		return (0);
	return (ft_strncmp(str, start, lenstart) == 0);
}
