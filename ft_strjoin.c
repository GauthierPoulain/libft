/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:05:06 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/16 09:06:11 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (s1)
		ft_memcpy(res, s1, ft_strlen(s1));
	if (s2)
		ft_strcat(res, (char *)s2);
	return (res);
}

char	*ft_strjoinf1(char *s1, char *s2)
{
	size_t	len;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (s1)
		ft_memcpy(res, s1, ft_strlen(s1));
	if (s2)
		ft_strcat(res, (char *)s2);
	free(s1);
	return (res);
}

char	*ft_strjoinf2(char *s1, char *s2)
{
	size_t	len;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (s1)
		ft_memcpy(res, s1, ft_strlen(s1));
	if (s2)
		ft_strcat(res, (char *)s2);
	free(s2);
	return (res);
}

char	*ft_strjoinall(char *s1, char *s2)
{
	size_t	len;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (s1)
		ft_memcpy(res, s1, ft_strlen(s1));
	if (s2)
		ft_strcat(res, (char *)s2);
	free(s1);
	free(s2);
	return (res);
}
