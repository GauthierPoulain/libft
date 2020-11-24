/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:45:30 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/24 15:01:15 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned long	i;
	unsigned long	tmp;

	if (!s || !(ptr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	tmp = 0;
	while (s[i])
	{
		if (i >= start && tmp < len)
			ptr[tmp++] = s[i];
		i++;
	}
	ptr[tmp] = '\0';
	return (ptr);
}
