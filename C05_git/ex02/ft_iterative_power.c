/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:14:32 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/27 01:29:41 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_power(2,3));
// }
