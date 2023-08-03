/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:38:32 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/20 02:44:37 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = &dest[0];
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}

/*#include <stdio.h>
int main() 
{
    char source[] = "Hello, World!";
    char destination[20];

    ft_strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}*/
