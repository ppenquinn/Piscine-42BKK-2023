/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthum-ar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:29:50 by tthum-ar          #+#    #+#             */
/*   Updated: 2023/07/16 19:51:42 by tthum-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char input);

void	slash(int key)
{
	if (key == 1)
		ft_putchar('/');
	else if (key == 2)
		ft_putchar('\\');
	else if (key == 3)
		ft_putchar('\\');
	else
		ft_putchar('/');
}

void	rush01(int x, int y)
{
	int	col;
	int	row;
	int	cnt;

	cnt = 1;
	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((col == y && row == 1) || (col == 1 && row == x))
				slash(cnt++);
			else if ((col == 1 && row == 1) || (col == y && row == x))
				slash(cnt++);
			else if (col == 1 || col == y || row == x || row == 1)
				ft_putchar('*');
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
		rush01(row, col);
	else
		write(1, "404 ERROR", 1);
}
