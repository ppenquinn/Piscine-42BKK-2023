/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalqatta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:43:43 by aalqatta          #+#    #+#             */
/*   Updated: 2023/07/30 18:00:13 by aalqatta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	put_sp_space(int j)
{
	write(1, " ", 1);
	put_sp(j);
}

void	rm_left_zeros(char **str)
{
	char	*str_cpy;
	int		i;
	int		j;

	str_cpy = (char *)malloc(sizeof(char) * (ft_strlen(*str) + 1));
	if (!(str_cpy))
		print_error();
	i = 0;
	j = 0;
	while ((*str)[i] == '0')
		i++;
	while ((*str)[i])
	{
		str_cpy[j] = (*str)[i];
		i++;
		j++;
	}
	if (j == 0)
		str_cpy[j++] = '0';
	str_cpy[j] = '\0';
	*str = str_cpy;
	ft_realloc(str, '-');
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}
