/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:09:08 by hanjung           #+#    #+#             */
/*   Updated: 2022/01/23 11:56:34 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (++divisor < nb)
		if (nb % divisor == 0)
			return (0);
	return (1);
}
