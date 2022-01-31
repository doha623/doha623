/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:16:03 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/17 19:59:11 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comma(char	k)
{
	if (k != '2')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = i;
		while (++j <= '9')
		{
			k = j;
			while (++k <= '9')
			{
				ft_print_comma(k);
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
			}
		}
		i++;
	}
}
