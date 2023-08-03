/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_clues.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:53:14 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/24 02:57:31 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	extract_clues_top(t_skyscraper_puzzle *puzzle, char *clues_str)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		puzzle->clues_top[i] = clues_str[i] - '0';
		i++;
	}
}

void	extract_clues_bottom(t_skyscraper_puzzle *puzzle, char *clues_str)
{
	int	start;
	int	i;

	start = GRID_SIZE;
	i = 0;
	while (i < GRID_SIZE)
	{
		puzzle->clues_bottom[i] = clues_str[start + i] - '0';
		i++;
	}
}

void	extract_clues_left(t_skyscraper_puzzle *puzzle, char *clues_str)
{
	int	start;
	int	i;

	start = 2 * GRID_SIZE;
	i = 0;
	while (i < GRID_SIZE)
	{
		puzzle->clues_left[i] = clues_str[start + i] - '0';
		i++;
	}
}

void	extract_clues_right(t_skyscraper_puzzle *puzzle, char *clues_str)
{
	int	start;
	int	i;

	start = 3 * GRID_SIZE;
	i = 0;
	while (i < GRID_SIZE)
	{
		puzzle->clues_right[i] = clues_str[start + i] - '0';
		i++;
	}
}

void	extract_clues(t_skyscraper_puzzle *puzzle, char *clues_str)
{
	extract_clues_top(puzzle, clues_str);
	extract_clues_bottom(puzzle, clues_str);
	extract_clues_left(puzzle, clues_str);
	extract_clues_right(puzzle, clues_str);
}
