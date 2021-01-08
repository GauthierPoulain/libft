/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:14:07 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/08 11:07:34 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fetch_line(char *str)
{
	int		i;
	char	*res;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != 10)
		i++;
	if (!(res = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != 10)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

static char	*fetch_save(char *save)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!save)
		return (NULL);
	while (save[i] && save[i] != 10)
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	if (!(res = malloc(sizeof(char) * ((ft_strlen(save) - i) + 1))))
		return (NULL);
	i++;
	while (save[i])
		res[j++] = save[i++];
	res[j] = 0;
	free(save);
	return (res);
}

// #include <stdio.h>

int			ft_gnl(int fd, char **line)
{
	char		*buffer;
	static char	*save[10240];
	int			readvalue;

	readvalue = 1;
	if (fd < 0 || !line || !(buffer = malloc(sizeof(char) * (1 + 1))))
		return (-1);
	while (readvalue != 0 && !ft_strchr(save[fd], 10))
	{
		if ((readvalue = read(fd, buffer, 1)) == -1)
		{
			free(buffer);
			return (-1);
		}
		buffer[readvalue] = 0;
		save[fd] = ft_strjoin(save[fd], buffer);
	}
	free(buffer);
	*line = fetch_line(save[fd]);
	save[fd] = fetch_save(save[fd]);
	if (readvalue == 0)
		return (0);
	return (1);
}
