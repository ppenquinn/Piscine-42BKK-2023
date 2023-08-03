/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_input_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalqatta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:42:59 by aalqatta          #+#    #+#             */
/*   Updated: 2023/07/30 17:58:47 by aalqatta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	max_dict_length(void)
{
	int		i;
	int		j;
	int		fd;
	char	buffer;

	j = 0;
	i = -1;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buffer, 1))
	{
		if (buffer == ' ' || buffer == ':')
		{
			if (i > j)
				j = i;
			go_to_next_line(&fd, &i);
			continue ;
		}
		i++;
	}
	return (j + 2);
}

void	cmp_input_dict(int len)
{
	int	len_max;

	len_max = max_dict_length();
	if (len_max < len)
		print_error();
}
