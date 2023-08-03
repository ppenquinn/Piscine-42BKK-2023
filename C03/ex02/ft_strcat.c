/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:11 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/25 10:41:44 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(char dest[])
{
	int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	start;

	start = ft_count(dest);
	while (*src != '\0')
	{
		dest[start] = *src;
		src++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	char dest[] = "Napat";
	char src[] = "Palavathanakul";
    printf("%s", ft_strcat(dest, src));
}*/
