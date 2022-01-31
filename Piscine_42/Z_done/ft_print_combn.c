/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:23 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/18 15:17:13 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_arr(int arr[], int n, int i)
{
	i = 0;
	if (arr[n - 1] != n - 1)
	{
		write(1, ", ", 2);
	}
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft_loop(int arr[], int n, int i)
{
	while (arr[i] <= 9)
	{
		arr[i + 1] = arr[i] + 1;
		if (i == n - 1)
		{
			print_arr(arr, n, i);
		}
		else
		{
			ft_loop(arr, n, i + 1);
		}
		arr[i]++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	arr[i] = i;
	ft_loop(arr, n, i);
}

int	main(void)
{
	ft_print_combn(9);
}