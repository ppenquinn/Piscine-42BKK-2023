/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:24:39 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/20 11:19:36 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (src[cnt] != '\0' && cnt < n)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	while (cnt < n)
	{
		dest[cnt] = '\0';
		cnt++;
	}
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	char t = [10];
	printf("%s",ft_strcpy(t,"Napat",7));
	return 0;
}*/
