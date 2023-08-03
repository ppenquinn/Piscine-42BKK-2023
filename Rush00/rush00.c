/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvetchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:32:49 by nvetchai          #+#    #+#             */
/*   Updated: 2023/07/16 19:36:57 by nvetchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int column, int row);
void	ft_putchar(char input);

void	rush00(int column, int row)
{
	int	i;
	int	j;

	i = 1;
	while (i <= row)
	{
		j = 1;
		while (j <= column)
		{
			if ((i == 1 && j == 1)
				(i == 1 && j == column) || 
				(i == row && j == 1) || 
				(i == row && j == column))
				ft_putchar('o');
			else if (i == 1 || i == row)
				ft_putchar('-');
			else if (j == 1 || j == column)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int column, int row)
{
	if (column <= 0 || row <= 0)
		ft_putchar("your inputs are not corrent, please try again");
	else
		rush00(column, row);
}
