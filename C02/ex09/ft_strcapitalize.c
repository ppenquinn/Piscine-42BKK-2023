/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:27:28 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/20 17:00:35 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_start(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

void	ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = &str[0];
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (start);
}

char	*ft_strcapitalize(char *str)
{
	int		now;
	int		nex;
	char	*start;

	str = ft_strlowcase(str);
	start = &str[0];
	ft_strupcase(str++);
	while (*str != '\0')
	{
		now = ft_check_start(str);
		nex = ft_check_start(str + 1);
		if (now == 0 && nex == 1)
			ft_strupcase(str + 1);
		str++;
	}
	return (str);
}

/*#include <stdio.h>
int    main()
{	char    n[]= "HELLO";
	char   *nbr;

	nbr = &n[0];
	ft_strcapitalize(nbr);
	printf("%s", n);
	return 0;
}*/
