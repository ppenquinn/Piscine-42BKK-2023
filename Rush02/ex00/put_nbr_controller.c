/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_controller.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalqatta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:50:02 by aalqatta          #+#    #+#             */
/*   Updated: 2023/07/30 20:41:46 by aalqatta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_cat(char c1, char c2)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 3);
	if (!(str))
		return (0);
	str[0] = c1;
	str[1] = c2;
	str[2] = 0;
	return (str);
}

char	*put_1_digits(char c1)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!(str))
		return (0);
	str[0] = c1;
	str[1] = 0;
	return (str);
}

void	put_2_digits(char *str, int *i)
{
	if (str[0] == '1')
		ft_putstr(parse_dict(ft_cat(str[0], str[1]), i));
	else
	{
		ft_putstr(parse_dict(ft_cat(str[0], '0'), i));
		if (str[1] != '0')
		{
			write(1, "-", 1);
			ft_putstr(parse_dict(put_1_digits(str[1]), i));
		}
	}
}

void	put_3_digits(char *str, int *i)
{
	if (str[0] != '0')
	{
		ft_putstr(parse_dict(put_1_digits(str[0]), i));
		write(1, " ", 1);
		ft_putstr(parse_dict("100", i));
		if (str[1] != '0' || str[2] != '0')
			write(1, " and ", 5);
	}
	if (str[1] != '0' || str[2] != '0')
	{
		if (str[1] == '0')
			ft_putstr(parse_dict(&str[2], i));
		else if (str[1] == '1')
			ft_putstr(parse_dict(ft_cat(str[1], str[2]), i));
		else
		{
			ft_putstr(parse_dict(ft_cat(str[1], '0'), i));
			if (str[2] != '0')
			{
				write(1, "-", 1);
				ft_putstr(parse_dict(put_1_digits(str[2]), i));
			}
		}
	}
}

void	put_nbr_controller(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	if (len == 1)
		ft_putstr(parse_dict(str, &i));
	else if (len == 2)
		put_2_digits(str, &i);
	else
		put_3_digits(str, &i);
}
