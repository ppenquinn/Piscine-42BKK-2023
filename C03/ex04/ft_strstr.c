/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:39:56 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/25 12:26:30 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *tofind)
{
	int	check;

	if (*tofind == '\0')
		return (str);
	while (*str != '\0')
	{
		check = 0;
		if (*tofind == *str)
		{
			while (tofind[check] == str[check] && str[check] != '\0')
			{
				check++;
				if (tofind[check] == '\0')
					return (str);
			}
		}
		str++;
	}
	return (0);
}

// int main(void)
//  {
//  	char str[] = "piscine Bengu";
// 	char tofind[] = "Bengudfnf";
// 	printf("%s", ft_strstr(str, tofind));
// 	return 0;
// }
