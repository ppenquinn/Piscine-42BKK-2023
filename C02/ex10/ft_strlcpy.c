/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:01:36 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/20 17:04:52 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_size(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int			cnt;
	int						size;

	cnt = 1;
	size = ft_size(src);
	while (cnt < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		cnt++;
	}
	*dest = '\0';
	return (size);
}

/*#include <stdio.h>
int main()
{
  char src[] = "To be or not to be";
  char *ptr_src = &src[0];
  char dest[15];
  char *ptr_dest = &dest[0];
  unsigned int n = 5 ;

  int len = ft_strlcpy(ptr_dest, ptr_src, n);
  printf("%d",len);
}*/
