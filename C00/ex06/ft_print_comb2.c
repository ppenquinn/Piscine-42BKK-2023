/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:49:28 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/13 23:47:21 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c += '0';
	write(1, &c, 1);
}

void	check_num(int num)
{
	int	ans1;
	int	ans2;

	ans1 = num / 10;
	ans2 = num % 10;
	ft_putchar(ans1);
	ft_putchar(ans2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			check_num(i);
			write(1, " ", 1);
			check_num(j);
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
	write(1, "98 99", 5);
}
