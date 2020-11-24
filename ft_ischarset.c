/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:59:13 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/24 17:32:15 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_ischarset(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}