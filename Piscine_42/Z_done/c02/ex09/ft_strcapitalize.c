/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:43:25 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/24 08:48:12 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != 0)
	{
		if (str[i] < '0' || '9' < str[i])
		{
			if (str[i - 1] < '0' || ('9' < str[i - 1] && str[i - 1] < 'A')
				|| ('Z' < str[i - 1] && str[i - 1] < 'a') || 'z' < str[i - 1])
			{
				if ('a' <= str[i] && str[i] <= 'z')
					str[i] -= 32;
			}
			else if ('A' <= str[i] && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
