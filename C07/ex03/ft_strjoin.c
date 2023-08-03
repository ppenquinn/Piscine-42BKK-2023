/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:32:25 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/02 17:50:35 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_join_2(char *dest, char *sep, int idx)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		dest[idx] = sep[i];
		i++;
		idx++;
	}
	return (idx);
}

void	ft_join(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	idx;

	idx = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[idx] = strs[i][j];
			j++;
			idx++;
		}
		i++;
		if (i != size)
		{
			idx = ft_join_2(dest, sep, idx);
		}
	}
	dest[idx] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len_str;
	int		i;

	len_str = 0;
	i = 0;
	while (i < size)
	{
		len_str += ft_strlen(strs[i]);
		i++;
	}
	len_str += (ft_strlen(sep)-1) * size + 1;
	dest = (char *)malloc(sizeof(char) * len_str);
	ft_join(dest, strs, sep, size);
	return (dest);
}

// int	main(void)
// {
// 	char *strs[] = {"abc" , "def"};
// 	printf("%s", ft_strjoin(2, strs, "x"));
// }
