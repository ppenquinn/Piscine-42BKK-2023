/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalqatta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:18:14 by aalqatta          #+#    #+#             */
/*   Updated: 2023/07/30 20:49:31 by aalqatta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	free(str);
}

void	div_into_3_digits(int *i, char *str, char *argv, int *l)
{
	int	j;
	int	k;

	k = 0;
	j = 0;
	if (*i % 3 != 0)
	{
		while (*i % 3 != 0)
		{
			str[k++] = argv[*l];
			(*i)--;
			(*l)++;
		}
	}
	else
	{
		while (j < 3)
		{
			str[k++] = argv[*l];
			j++;
			(*l)++;
		}
	}
	str[k] = 0;
}

int	check_input(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (-1);
	if (argc > 2)
		return (-1);
	i = 0;
	if (argv[1][0] == '0')
		rm_left_zeros(&argv[1]);
	if (argv[1][0] == '\0')
		return (-1);
	while (argv[1][i])
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
			return (-1);
		i++;
	}
	cmp_input_dict(i);
	return (i);
}

void	store_input(int i, char **argv, char *str)
{
	int	j;
	int	k;
	int	l;

	j = i / 3;
	if (i % 3 != 0)
		j++;
	l = 0;
	k = j;
	while (j != 0)
	{
		div_into_3_digits(&i, str, argv[1], &l);
		if (j != k && ft_strcmp(str, "000") != 0)
			write(1, ", ", 2);
		if (j == 1 && ft_strcmp(str, "000") != 0 && str[0] == '0' && k != 1)
			write(1, "and ", 4);
		put_nbr_controller(str);
		if (ft_strcmp(str, "000") != 0 && j != 1)
			put_sp_space(j);
		j--;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = check_input(argc, argv);
	if (i == -1)
		print_error();
	str = (char *)malloc(sizeof(char) * 4);
	if (!(str))
		print_error();
	store_input(i, argv, str);
}
