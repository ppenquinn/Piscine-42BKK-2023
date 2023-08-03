/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:54:25 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/30 00:52:55 by nappalav         ###   ########.fr       */
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
	int	anc;

	anc = argc;
	ft_putstr(argv[0]);
	return (0);
}
