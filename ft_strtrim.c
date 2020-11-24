/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:56:58 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/24 17:50:41 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int		i;
	int		size;

	size = ft_strlen(s1) - 1;
	while (ft_ischarset(s1[size], (char *)set))
		size--;
	if (!(res = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (ft_ischarset(*s1, (char *)set) && *s1)
		s1++;
	i = 0;
	while (i <= size && *s1)
		res[i++] = *s1++;
	res[i] = 0;
	return (res);
}
