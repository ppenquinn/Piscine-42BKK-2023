/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:09:51 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/26 18:02:49 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (str_len(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == 43 || base[i] == 45 || base[i] <= 32 || base[i] == 127)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		div;
	char	ans;

	if (check_error(base) == 1)
	{
		div = str_len(base);
		if (nbr < 0 && nbr > -div)
			write(1, "-", 1);
		if (nbr >= div || nbr <= -div)
		{
			ft_putnbr_base(nbr / div, base);
			nbr %= div;
		}
		if (nbr >= 0)
			ans = base[nbr];
		else
			ans = base[nbr * -1];
		write(1, &ans, 1);
	}
}

// int main(void)
// {
// 	ft_putnbr_base(-2147483647, "01");
// 	printf("\n");
// }
