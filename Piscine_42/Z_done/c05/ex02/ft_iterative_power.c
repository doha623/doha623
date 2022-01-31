/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:13:39 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/25 17:02:34 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_iterative_power(int	nb, int	power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power-- != 0)
		result *= nb;
	return (result);
}
