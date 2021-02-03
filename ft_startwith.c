/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startwith.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 06:00:15 by gapoulai          #+#    #+#             */
/*   Updated: 2021/02/03 13:30:39 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_startwith(char *str, char *start)
{
	size_t	tmp;

	tmp = ft_strlen(start);
	return (!ft_memcmp(str, start, tmp) && (!str[tmp] || ft_isspace(str[tmp])));
}
