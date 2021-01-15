/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:37:34 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/15 12:42:05 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_add_line(char **src, char *line)
{
	char	**new;
	int		j;
	int		i;

	i = ft_tab_len(src);
	new = ft_calloc(i + 2, sizeof(char *));
	if (!new)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new[j] = ft_strdup(src[j]);
		free(src[j++]);
	}
	new[j++] = ft_strdup(line);
	new[j] = NULL;
	free(line);
	if (i)
		free(src);
	return (new);
}
