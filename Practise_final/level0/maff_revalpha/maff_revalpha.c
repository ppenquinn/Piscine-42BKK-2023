/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:47:06 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/03 10:58:55 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char alpha = 'z';
	char upper;

	while (alpha >= 'a')
	{
		upper = alpha - 32;
		if (alpha % 2 == 0)
			write(1, &alpha, 1);
		else
			write(1, &upper, 1);
		alpha--;
	}
	write(1, "\n", 1);
	return 0;
}
