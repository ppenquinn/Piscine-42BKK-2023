/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:52:19 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/23 19:36:16 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"
#include <unistd.h>
#include <stdio.h>

int	ft_check_error(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
			i++;
		else if (argv[1][i] == ' ')
			i++;
		else
		{
			write(1, "Argument isn't valid\n", 21);
			return (0);
		}
	}
	if (i != 31)
	{
		write(1, "Argument isn't valid\n", 21);
		return (0);
	}
	return (1);
}

int	ft_str_is_numberic(char *argv[], char *clues_str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_check_error(argv) == 0)
		return (0);
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			clues_str[j] = argv[1][i];
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_skyscraper_puzzle	puzzle;
	int					cnt[2];
	char				clues_str[17];

	if (argc != 2)
	{
		write(1, "Argument isn't valid\n", 21);
		return (1);
	}
	ft_str_is_numberic(argv, clues_str);
	extract_clues(&puzzle, clues_str);
	cnt[0] = 0;
	while (cnt[0] < GRID_SIZE)
	{
		cnt[1] = 0;
		while (cnt[1] < GRID_SIZE)
		{
			puzzle.grid[cnt[0]][cnt[1]] = 0;
			cnt[1]++;
		}
		cnt[0]++;
	}
	solve_skyscraper(&puzzle, 0, 0);
	return (0);
}
