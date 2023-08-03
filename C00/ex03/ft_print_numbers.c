/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:02:19 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/14 03:40:44 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	alphabet;

	alphabet = '0';
	while (alphabet != '9' + 1)
	{
		write(1, &alphabet, 1);
		alphabet++ ;
	}
}
