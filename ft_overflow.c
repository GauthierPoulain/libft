/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:26:39 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/27 14:26:47 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

double		ft_overflow(double min, double max, double value)
{
	if (min == max || min > max)
		return (0);
	if (value < min)
		value += (max - min);
	else if (value > max)
		value -= (max - min);
	else
		return (value);
	return (ft_overflow(min, max, value));
}
