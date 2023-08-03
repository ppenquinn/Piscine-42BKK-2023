/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:39:45 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/20 02:53:52 by nappalav         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	cnt;
	int	lens;

	cnt = 0;
	lens = ft_len(str);
	while ((*str >= 'a' && *str <= 'z' ) || (*str >= 'A' && *str <= 'Z'))
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
	int a = ft_str_is_alpha("Napat");
	return (0);
}*/
