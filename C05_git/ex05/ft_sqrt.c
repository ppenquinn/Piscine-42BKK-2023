/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:05:58 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/27 02:12:03 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	ans;

	ans = 1;
	if (nb <= 0)
		return (0);
	while (nb >= (ans * ans))
	{
		if (nb == (ans * ans))
			return (ans);
		ans++;
	}
	return (0);
}
