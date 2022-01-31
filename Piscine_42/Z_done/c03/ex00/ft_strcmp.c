/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:40:26 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/23 14:36:23 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s2[i] && s1[i] && s1[i] == s2[i])
	{		
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
