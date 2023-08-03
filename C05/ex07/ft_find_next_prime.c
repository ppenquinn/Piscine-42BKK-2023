/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:33:42 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/30 15:08:34 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	ans;

	ans = nb;
	if (nb < 2)
		return (2);
	while (!ft_is_prime(ans))
		ans++;
	return (ans);
}

// int	main(void)
// {
// 	printf("%d",ft_find_next_prime(2147483644));
// }
