/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:13:12 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/04 01:33:47 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	write(1, str, cnt);
}

void	ft_putnbr(int nb)
{
	char	ans;

	if (nb < 0 && nb > -10)
		write(1, "-", 1);
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb >= 0)
		ans = '0' + nb;
	else
		ans = '0' - nb;
	write(1, &ans, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// int main(int argc, char **argv)
// {
//         ft_show_tab(ft_strs_to_tab(argc, argv));
//         return (0);
// }
