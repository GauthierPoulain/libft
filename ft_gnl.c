/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:14:07 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/13 07:30:11 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strjoin_free(char *s1, char c)
{
	int		i;
	int		tlen;
	char	*ret;

	i = 0;
	if (!s1)
	{
		if (!(ret = malloc(sizeof(char) * 2)))
			return (0);
		ret[0] = c;
		ret[1] = 0;
		return (ret);
	}
	tlen = ft_strlen(s1) + 1;
	if (!(ret = malloc(sizeof(char) * (tlen + 1))))
		return (0);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = c;
	ret[i + 1] = 0;
	free(s1);
	return (ret);
}

int			ft_gnl(int fd, char **line)
{
	char		buffer;
	int			ret;
	int			readvalue;

	ret = 0;
	if (!line)
		return (-1);
	if (!(*line = malloc(sizeof(char) * 1)))
		return (-1);
	*line[0] = 0;
	while ((readvalue = read(fd, &buffer, 1)) && buffer != '\n')
		*line = strjoin_free(*line, buffer);
	if (!*line)
		*line = strjoin_free(*line, '\0');
	if (readvalue > 0)
		ret = 1;
	return (ret);
}
