/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:15:09 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/30 00:44:12 by nappalav         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	cnt_arg;
	int	arc;

	arc = argc;
	cnt_arg = 1;
	while (argv[cnt_arg])
	{
		ft_putstr(argv[cnt_arg]);
		cnt_arg++;
	}
	return (0);
}
