/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:33:48 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/16 19:41:27 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char input);

void	rush04(int colm, int row)
{
	int	cnt[2];

	cnt[0] = 1;
	while (cnt[0] <= row)
	{
		cnt[1] = 1;
		while (cnt[1] <= colm)
		{
			if ((cnt[0] == 1 && cnt[1] == 1) || 
				(cnt[1] == colm && cnt[0] == row))
				ft_putchar('A');
			else if ((cnt[0] == 1 && cnt[1] == colm) || 
				(cnt[1] == 1 && cnt[0] == row))
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
		rush04(col, row);
	else
		write(1, "404 ERROR", 9);
}
