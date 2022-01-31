/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:23:07 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/18 12:27:34 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	j;
	int	temp;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int numArr[10] = {8, 7, 4, 6, 5, 9, 2, 3, 1, 0};
	ft_sort_int_tab(numArr, sizeof(numArr) / sizeof(int));
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", numArr[i]);
	}
	printf("\n");
	return (0);
}
