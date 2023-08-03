/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:20:04 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/27 19:23:31 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	write(1, str, cnt);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	cnt_arg;

	cnt_arg = argc - 1;
	while (cnt_arg > 0)
	{
		ft_putstr(argv[cnt_arg]);
		cnt_arg--;
	}
	return (0);
}
