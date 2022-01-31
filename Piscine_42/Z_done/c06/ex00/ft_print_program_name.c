/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:52:19 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/26 12:09:13 by dohakim          ###   ########.fr       */
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
	if (ac > 0)
		ft_putstr(av[0]);
	write(1, "\n", 1);
}
