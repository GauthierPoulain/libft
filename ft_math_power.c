/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_power.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:37:43 by gapoulai          #+#    #+#             */
/*   Updated: 2021/01/13 01:20:17 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

long long		ft_math_power(long long nb, long long power)
{
	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	else
		return (nb * ft_math_power(nb, power - 1));
}
