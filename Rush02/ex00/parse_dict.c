/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalqatta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:17:44 by aalqatta          #+#    #+#             */
/*   Updated: 2023/07/30 20:42:56 by aalqatta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	word_length(int i)
{
	int		len;
	int		fd;
	char	buffer;

	len = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while (i-- > 0)
		read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	while (read(fd, &buffer, 1) && buffer != '\n')
		len++;
	return (len);
}

char	*get_word_in_dict(int fd, int nb_char, char buffer)
{
	char	*str;
	int		i;

	i = word_length(nb_char);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!(str))
		return (0);
	while (buffer == ' ')
		read(fd, &buffer, 1);
	read(fd, &buffer, 1);
	while (buffer == ' ')
		read(fd, &buffer, 1);
	i = 0;
	while (buffer != '\n')
	{
		str[i] = buffer;
		i++;
		read(fd, &buffer, 1);
	}
	str[i] = '\0';
	return (str);
}

void	go_to_next_line(int *fd, int *i)
{
	char	buffer;

	while (read(*fd, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
	}
	*i = 0;
}

char	*rm_extra_space(char *str)
{
	char	*str_cpy;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(str);
	str_cpy = (char *)malloc(sizeof(char) * (len + 100));
	if (!(str_cpy))
		print_error();
	i = 1;
	j = 1;
	str_cpy[0] = str[0];
	while (str[i])
	{
		if (!(str[i] == ' ' && str[i - 1] == ' '))
		{
			str_cpy[j] = str[i];
			j++;
		}
		i++;
	}
	str_cpy[j] = '\0';
	ft_realloc(&str_cpy, '-');
	return (str_cpy);
}

char	*parse_dict(char *str, int *i)
{
	int		fd;
	char	buffer;
	char	*output;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buffer, 1))
	{
		if ((str[*i] != buffer && str[*i] != '\0'))
		{
			go_to_next_line(&fd, i);
			continue ;
		}
		if ((buffer == ':' || buffer == ' ') && str[*i] == '\0')
			output = get_word_in_dict(fd, *i, buffer);
		if (str[*i] == '\0')
		{
			go_to_next_line(&fd, i);
			continue ;
		}
		*i += 1;
	}
	return (rm_extra_space(output));
}
