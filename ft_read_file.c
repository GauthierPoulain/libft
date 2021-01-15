/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 06:04:43 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/15 12:38:45 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_read_file(int fd)
{
	char	*line;
	char	**file;
	int		i;
	int		ret;

	i = 0;
	ret = 1;
	while (ret)
	{
		ret = ft_gnl(fd, &line);
		if (ret == -1)
			return (NULL);
		if (*line)
			file = ft_add_line(file, line);
		else
			free(line);
		if (!file)
			return (NULL);
	}
	return (file);
}
