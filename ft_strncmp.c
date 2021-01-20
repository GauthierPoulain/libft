/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 08:53:31 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/20 12:38:26 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char casts1;
	unsigned char casts2;

	while (n-- > 0)
	{
		casts1 = *s1++;
		casts2 = *s2++;
		if (casts1 != casts2)
			return (casts1 - casts2);
		if (!casts1)
			return (0);
	}
	return (0);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char casts1;
	unsigned char casts2;

	while (s1 && s2)
	{
		casts1 = *s1++;
		casts2 = *s2++;
		if (casts1 != casts2)
			return (casts1 - casts2);
		if (!casts1)
			return (0);
	}
	return ((unsigned char)s1 - (unsigned char)s2);
}

