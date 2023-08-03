/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:36:46 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/24 09:57:49 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"
#include <stdio.h>

int	is_valid_placement(t_skyscraper_puzzle *puzzle, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (puzzle->grid[row][i] == num || puzzle->grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

void	is_grid_filled_2(t_skyscraper_puzzle *puzzle, int irow, int j)
{
	char	buffer;

	buffer = puzzle->grid[irow][j] + '0';
	write(1, &buffer, 1);
	if (j != GRID_SIZE - 1)
		write(1, " ", 1);
}

int	is_grid_filled(t_skyscraper_puzzle *puzzle)
{
	int	i;
	int	irow;
	int	j;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (!is_clue_satisfied(puzzle, i, GRID_SIZE - 1))
			return (0);
		i++;
	}
	irow = 0;
	while (irow < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			is_grid_filled_2(puzzle, irow, j);
			j++;
		}
		write(1, "\n", 1);
		irow++;
	}
	return (1);
}

int	move_to_next_row(t_skyscraper_puzzle *puzzle, int row)
{
	return (solve_skyscraper(puzzle, row + 1, 0));
}

int	solve_skyscraper(t_skyscraper_puzzle *puzzle, int row, int col)
{
	int	i;
	int	cnt;

	if (row == GRID_SIZE)
	{
		printf("GRID IS FILLED %d\n",is_grid_filled(puzzle));
		return (is_grid_filled(puzzle));
	}
	if (col == GRID_SIZE)
		return (move_to_next_row(puzzle, row));
	if (puzzle->grid[row][col] != 0)
		return (solve_skyscraper(puzzle, row, col + 1));
	i = 1;
	while (i <= GRID_SIZE)
	{
		if (is_valid_placement(puzzle, row, col, i))
		{
			puzzle->grid[row][col] = i;
			printf("row = %d || col = %d || num = %d\n",row, col, i);
			if (solve_skyscraper(puzzle, row, col + 1))
				return (1);
			//else
			//	printf("Boll Solve %d \n", solve_skyscraper(puzzle, row, col + 1));
			puzzle->grid[row][col] = 0;
			printf("\nset the number = 0 at [%d][%d]\n",row,col);
		}
		i++;
	}
	return (0);
}
