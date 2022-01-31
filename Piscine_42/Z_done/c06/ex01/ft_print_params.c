/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:52:40 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/26 18:28:09 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int	ac, char	**av)
{
	int	i;

	i = 1;
	while (ac > i)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
