/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:02:08 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/25 15:12:08 by dohakim          ###   ########.fr       */
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
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	find_match(char	str, char	*base)
{
	int retour;
	int	j;

	retour = 0;
	j = 0;
	while (base[j])
	{
		if (str == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	i;
	int	result;
	int	sign;
	int	len_base;
	int	tmp;

	len_base = check_base(base);
	i = -1;
	while (str[++i] <= 32)
		sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	tmp = find_match(str[i], base);
	while (tmp != -1)
	{
		result = (result * len_base) + tmp;
		i++;
		tmp = find_match(str[i], base);
	}
	return (result *= sign);
}

int	main(void)
{
	int	n;

	n = ft_atoi_base("1", "0123456789");
	printf("%d\n", n);
}