/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthum-ar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:23:19 by tthum-ar          #+#    #+#             */
/*   Updated: 2023/07/16 19:50:10 by tthum-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char input);

void	rush02(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((col == 1 && row == 1) || (col == 1 && row == x))
				ft_putchar('A');
			else if ((col == y && row == x) || (col == y && row == 1))
				ft_putchar('C');
			else if (col == 1 || col == y || row == x || row == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}

void	rush(int row, int col)
{
	if (row >= 0 && col >= 0)
		rush02(row, col);
	else
		write(1, "404 ERROR", 1);
}
