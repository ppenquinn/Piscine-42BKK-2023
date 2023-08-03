/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   satisfied.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:28:05 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/23 18:28:17 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	is_clue_top_satisfied(t_skyscraper_puzzle *puzzle, int col)
{
	int	visible_skyscrapers;
	int	tallest_building;
	int	i;

	visible_skyscrapers = 1;
	tallest_building = puzzle->grid[0][col];
	i = 1;
	while (i < GRID_SIZE)
	{
		if (puzzle->grid[i][col] > tallest_building)
		{
			tallest_building = puzzle->grid[i][col];
			visible_skyscrapers++;
		}
		i++;
	}
	return (visible_skyscrapers == puzzle->clues_top[col]);
}

int	is_clue_bottom_satisfied(t_skyscraper_puzzle *puzzle, int col)
{
	int	visible_skyscrapers;
	int	tallest_building;
	int	i;

	visible_skyscrapers = 1;
	tallest_building = puzzle->grid[GRID_SIZE - 1][col];
	i = GRID_SIZE - 2;
	while (i >= 0)
	{
		if (puzzle->grid[i][col] > tallest_building)
		{
			tallest_building = puzzle->grid[i][col];
			visible_skyscrapers++;
		}
		i--;
	}
	return (visible_skyscrapers == puzzle->clues_bottom[col]);
}

int	is_clue_left_satisfied(t_skyscraper_puzzle *puzzle, int row)
{
	int	visible_skyscrapers;
	int	tallest_building;
	int	i;

	visible_skyscrapers = 1;
	tallest_building = puzzle->grid[row][0];
	i = 1;
	while (i < GRID_SIZE)
	{
		if (puzzle->grid[row][i] > tallest_building)
		{
			tallest_building = puzzle->grid[row][i];
			visible_skyscrapers++;
		}
		i++;
	}
	return (visible_skyscrapers == puzzle->clues_left[row]);
}

int	is_clue_right_satisfied(t_skyscraper_puzzle *puzzle, int row)
{
	int	visible_skyscrapers;
	int	tallest_building;
	int	i;

	visible_skyscrapers = 1;
	tallest_building = puzzle->grid[row][GRID_SIZE - 1];
	i = GRID_SIZE - 2;
	while (i >= 0)
	{
		if (puzzle->grid[row][i] > tallest_building)
		{
			tallest_building = puzzle->grid[row][i];
			visible_skyscrapers++;
		}
		i--;
	}
	return (visible_skyscrapers == puzzle->clues_right[row]);
}

int	is_clue_satisfied(t_skyscraper_puzzle *puzzle, int row, int col)
{
	if (!is_clue_top_satisfied(puzzle, col))
		return (0);
	if (!is_clue_bottom_satisfied(puzzle, col))
		return (0);
	if (!is_clue_left_satisfied(puzzle, row))
		return (0);
	if (!is_clue_right_satisfied(puzzle, row))
		return (0);
	return (1);
}
