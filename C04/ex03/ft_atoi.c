/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:02:32 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/26 18:00:46 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	cnt_sign;
	int	num;

	num = 0;
	cnt_sign = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			cnt_sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (cnt_sign % 2 == 1)
		num *= -1;
	return (num);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("number is %d",ft_atoi("2638"));
// 	return (0);
// }
