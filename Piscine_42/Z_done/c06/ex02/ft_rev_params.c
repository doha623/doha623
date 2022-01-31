/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:52:58 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/26 18:33:07 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int	ac, char	**av)
{
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		ft_putstr(av[i]);
		i--;
		write(1, "\n", 1);
	}
}
