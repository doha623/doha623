/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:33:11 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/25 20:11:45 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_sqrt(int nb)
{
	int	root;
	int	result;

	root = 0;
	result = 0;
	while (root <= nb && nb >= 0)
	{
		if (root * root == nb)
		{
			result = root;
			break ;
		}
		if (root * root > nb || root * root < 0)
			break ;
		root++;
	}
	return (result);
}
