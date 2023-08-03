/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 02:05:51 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/30 16:59:46 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	write(1, str, cnt);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	while (cmp == 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		cmp = *s1 - *s2;
		s1++;
		s2++;
	}
	return (cmp);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort(char **argv, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	cnt_arg;

	cnt_arg = 1;
	ft_sort(argv, argc - 1);
	while (argv[cnt_arg])
	{
		ft_putstr(argv[cnt_arg]);
		cnt_arg++;
	}
	return (0);
}
