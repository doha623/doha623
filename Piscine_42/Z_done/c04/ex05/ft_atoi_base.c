/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:02:08 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/25 19:14:12 by dohakim          ###   ########.fr       */
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
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32)
			return (0);
		i++;
	}
	return (i);
}

int	check_str(char	*str, int	*i)
{
	int	sign;

	sign = 1;
	while (str[*i] <= 32)
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign *= -1;
		*i += 1;
	}
	return (sign);
}

int	find_match(char	str, char	*base)
{
	int	j;

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

	i = 0;
	result = 0;
	len_base = check_base(base);
	if (len_base >= 2)
	{
		sign = check_str(str, &i);
		tmp = find_match(str[i], base);
		while (tmp != -1)
		{
			result = (result * len_base) + tmp;
			i++;
			tmp = find_match(str[i], base);
		}
		return (result *= sign);
	}
	return (0);
}
