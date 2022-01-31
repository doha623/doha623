/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fine_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:09:28 by hanjung           #+#    #+#             */
/*   Updated: 2022/01/23 13:03:24 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int n)
{
	int	divisor;

	divisor = 2;
	while (divisor * divisor <= n && divisor * divisor > 0)
		if (n % divisor++ == 0)
			return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (check_prime(nb))
		nb++;
	return (nb);
}
