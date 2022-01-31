/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:40:01 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/24 08:48:37 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;
	unsigned char	a;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		a = str[i];
		if (32 <= a && a <= 126)
			write(1, &a, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[a / 16], 1);
			write(1, &hex[a % 16], 1);
		}
		i++;
	}
}
