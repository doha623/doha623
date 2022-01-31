/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:02:08 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/25 13:56:07 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include <stdio.h>

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
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (i);
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
	tmp = find_match(str[i], base);
	result = 0;
	while (tmp != -1)
	{
		i++;
		result = (result * len_base) + tmp;
		tmp = find_match(str[i], base);
	}
	return (result *= sign);
}

int main(int argc, char **argv) {
	if (argc < 3) {
		puts("Invalid arg");
		return -1;
	}
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return 0;
}
