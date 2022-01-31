/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:48:55 by hyeongki          #+#    #+#             */
/*   Updated: 2022/01/20 17:19:43 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error_check(char *base)
{
	int	i;
	int	j;
	int	flag1;
	int	flag2;

	i = 0;
	flag1 = 0;
	flag2 = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			flag1 = 1;
		while (base[j])
		{
			if (base[i] == base[j])
				flag2 = 1;
			j++;
		}
		i++;
	}
	if (i <= 1 || flag1 || flag2)
		return (1);
	return (0);
}

int	*check_base(char c, char *base)
{
	int			i;
	static int	result[2];

	i = 0;
	result[0] = 0;
	result[1] = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			result[0] = i;
			result[1] = 1;
			return (result);
		}
		i++;
	}
	return (result);
}

int	get_dicimal(char *str, char *base)
{
	int	len;
	int	*value;
	int	result;

	len = 0;
	while (base[len])
		len++;
	result = 0;
	while (*str)
	{
		value = check_base(*str, base);
		if (!value[1])
			break ;
		result *= len;
		result += value[0];
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	m_flag;
	int	result;

	if (error_check(base))
		return (0);
	while (*str <= 32)
		str++;
	m_flag = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			m_flag *= -1;
		str++;
	}
	result = get_dicimal(str, base) * m_flag;
	return (result);
}
