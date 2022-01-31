/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:04:09 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/27 11:12:34 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd>

# define TURE 1
# define	FALSE 0
# define	EVEN(nbr) nbr % 2 == 0
# define	EVEN_MSG "I have an even number of arguments.\n"
# define	ODD_MSG "I have an odd number of arguments.\n"
# define	SUCCESS	0

typedef int	t_bool;

#endif
