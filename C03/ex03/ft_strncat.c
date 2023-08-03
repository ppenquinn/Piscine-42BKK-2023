/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:33:26 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/27 10:02:18 by nappalav         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	start;

	start = ft_count(dest);
	while (*src != '\0' && n > 0)
	{
		dest[start] = *src;
		src++;
		start++;
		n--;
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
