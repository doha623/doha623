/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:46:09 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/26 19:58:41 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	j;

	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	len_src = 0;
	while (src[len_src])
		len_src++;
	j = 0;
	while (src[j] && len_dest + j + 1 < size)
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	dest[len_dest + j] = '\0';
	if (size <= len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}
