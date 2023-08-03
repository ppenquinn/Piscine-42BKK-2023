/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalqatta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:44:31 by aalqatta          #+#    #+#             */
/*   Updated: 2023/07/30 20:19:29 by aalqatta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_realloc(char **str, char sign)
{
	int		len;
	char	*str_cpy;

	len = ft_strlen(*str);
	if (sign == '+')
	{
		str_cpy = (char *)malloc(sizeof(char) * (len + 100));
		if (!(str_cpy))
			exit(0);
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	else
	{
		str_cpy = (char *)malloc(sizeof(char) * len);
		if (!(str_cpy))
			exit(0);
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	return (1);
}
