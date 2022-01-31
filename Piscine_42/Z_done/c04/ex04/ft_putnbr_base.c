/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:47:37 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/26 09:30:27 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	check_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

void	trans_base(unsigned int	nbr, char	*base, unsigned int	len_base)
{
	if (nbr > len_base)
	{
		trans_base(nbr / len_base, base, len_base);
		ft_putchar(base[nbr % len_base]);
	}
	else if (nbr == len_base)
	{
		ft_putchar(base[nbr / len_base]);
		ft_putchar(base[nbr % len_base]);
	}
	else
		ft_putchar(base[nbr % len_base]);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	unsigned int	sign;
	unsigned int	len_base;

	if (check_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		sign = nbr * -1;
	}
	else
		sign = nbr;
	len_base = 0;
	while (base[len_base])
		len_base++;
	trans_base (sign, base, len_base);
}
