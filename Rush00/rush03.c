/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:18:58 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/16 20:01:11 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char intput);

void	rush03(int colm, int row)
{
	int	cnt[2];

	cnt[0] = 1;
	while (cnt[0] <= row)
	{
		cnt[1] = 1;
		while (cnt[1] <= colm)
		{
			if ((cnt[0] == 1 || cnt[0] == row) && cnt[1] == 1)
				ft_putchar('A');
			else if ((cnt[0] == 1 || cnt[0] == row) && cnt[1] == colm)
				ft_putchar('C');
			else if (cnt[0] == 1 || cnt[0] == row || 
				cnt[1] == 1 || cnt[1] == colm)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cnt[1]++;
		}
		ft_putchar('\n');
		cnt[0]++;
	}
}

void	rush(int col, int row)
{
	if (row >= 0 && col >= 0)
		rush03(col, row);
	else
		write(1, "404 ERROR", 9);
}
