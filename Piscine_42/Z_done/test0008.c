/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:03:13 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/16 15:29:11 by dohakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void    print(int number[]);
void	find(int start, int value, int number[]);
void	ft_print_combn(int n);

int g_scope;

int	main(void)
{
	ft_print_combn(2);
}

void	ft_print_combn(int n)
{
	int number[10];
	int i;

	i = 0;
	while (i < 10)  /* 배열 0으로 초기화*/
	{
		number[i++] = 0;
	}
	g_scope = n;
	find(0, 0, number);  /* find(int start, int value, int number[]) */
}

void    print(int number[])
{
    int     format;
    int     flag;
    int     i;
    char    tmp;
    i = 0;
    flag = 0;
    while (i < 10)
    {
        if (number[i] == 1)
        {
            if (flag == 0)
            {
                flag = 1;
                format = i;
            }
            tmp = i + '0';
            write(1, &tmp, 1);
        }
        i++;
    }
    if (format < 10 - g_scope)
        write(1, ", ", 2);
}

void	find(int start, int value, int number[]) /* find(0, 0, number); */
{
	int i;
	if (value == g_scope)  /* value = 0; */
	{
		print (number);
		return;
	}
	i = start;  /* start = 0; */
	while(i < 10)
	{
		if (number[i] == 1)
		{
			i++;
			continue;
		}
		number[i] = 1;
		find (i, value + 1, number);
		number[i] = 0;
		i++;
	}
	
}