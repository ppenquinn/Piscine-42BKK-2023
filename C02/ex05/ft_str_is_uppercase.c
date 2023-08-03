/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:37:58 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/20 02:54:31 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int	ft_str_is_uppercase(char *str)
{
	int	cnt;
	int	lens;

	cnt = 0;
	lens = ft_len(str);
	while (*str >= 'A' && *str <= 'Z' )
	{
		cnt++;
		str++;
	}
	if (cnt != lens)
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	int a = ft_str_is_uppercase("Napat");
	return (0);
}*/
