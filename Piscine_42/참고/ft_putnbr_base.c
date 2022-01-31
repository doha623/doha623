/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:50:14 by hyeongki          #+#    #+#             */
/*   Updated: 2022/01/18 14:34:45 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	error_check(char *base)
{
	int	i;
	int	j;
	int	flag1;
	int	flag2;

	i = 0;
	flag1 = 0;
	flag2 = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			flag1 = 1;
		while (base[j])
		{
			if (base[i] == base[j])
				flag2 = 1;
			j++;
		}
		i++;
	}
	if (i <= 1 || flag1 || flag2)
		return (1);
	return (0);
}

void	ft_putnbr_base_recur(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr > len)
	{
		ft_putnbr_base_recur(nbr / len, base, len);
		ft_putchar(base[nbr % len]);
	}
	else if (nbr == len)
	{
		ft_putchar(base[nbr / len]);
		ft_putchar(base[nbr % len]);
	}
	else
		ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	unsigned int	num;

	if (error_check(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		num = nbr * -1;
	}
	else
		num = nbr;
	len = 0;
	while (base[len])
		len++;
	ft_putnbr_base_recur(num, base, len);
}
