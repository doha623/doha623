/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:53:25 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/26 18:46:13 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char	**a, char	**b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s2[i] && s1[i] && s1[i] == s2[i])
	{		
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int	ac, char	**av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				ft_swap(&av[j], &av[j + 1]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
