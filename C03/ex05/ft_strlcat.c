/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:41:08 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/25 16:08:20 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_count(char dest[])
{
	int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = ft_count(dest);
	if (size <= len)
		return (len + ft_count(src));
	while (*src != '\0' && len < size - 1)
	{
		dest[len] = *src;
		src++;
		len++;
	}
	dest[len] = '\0';
	return (len + ft_count(src));
}

int main()
{
    char dest[] = "Test";
    char src[] = "Tets";
    int n = 7;

    printf("%u\n", ft_strlcat(dest, src, n));
    printf("%s\n", dest);

    return 0;
}
