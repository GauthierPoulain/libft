/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolowercase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:42:55 by gapoulai          #+#    #+#             */
/*   Updated: 2020/12/26 13:45:03 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tolowercase(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = ft_tolower(*s);
	}
}