/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 00:56:57 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/27 01:03:10 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb >= 1)
		{
			ans *= nb;
			nb--;
		}
		return (ans);
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d",ft_iterative_factorial(4));
// }
