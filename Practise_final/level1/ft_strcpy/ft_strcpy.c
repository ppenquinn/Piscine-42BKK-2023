/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:24:10 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/03 17:38:22 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char  *s2)
{
	//s1 = dest
	int	i=0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*src = "Hello World!";
// 	char	dest1[20];
// 	char	dest2[20];

// 	printf("ft_strcpy : %s\n", ft_strcpy(dest1, src));
// 	printf("dest1 : %s\n", dest1);
// 	printf("expected : %s\n", strcpy(dest2, src));
// 	return 0;
// }
