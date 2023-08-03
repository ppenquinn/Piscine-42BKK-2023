/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:29:12 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/23 18:34:27 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H
# include <unistd.h>
# define GRID_SIZE 4

typedef struct skyscraper 
{
	int	grid[GRID_SIZE][GRID_SIZE];
	int	clues_top[GRID_SIZE];
	int	clues_bottom[GRID_SIZE];
	int	clues_left[GRID_SIZE];
	int	clues_right[GRID_SIZE];
}	t_skyscraper_puzzle;

int		is_clue_satisfied(t_skyscraper_puzzle *puzzle, int row, int col);
int		solve_skyscraper(t_skyscraper_puzzle *puzzle, int row, int col);
void	write_int(int num);
void	extract_clues(t_skyscraper_puzzle *puzzle, char *clues_str);

#endif
