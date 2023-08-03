/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:05:58 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/31 01:20:54 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	ans;

	ans = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (ans <= nb / 2)
	{
		if (nb == (ans * ans))
			return (ans);
		ans++;
	}
	return (0);
}

/*#include <stdio.h>

int main (void)
{
	printf("ans is %d", ft_sqrt(4));
}*/
