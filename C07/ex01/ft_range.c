/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:56:17 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/01 20:16:27 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	idx;

	if (min >= max)
		return (0);
	idx = 0;
	range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[idx] = min;
		min++;
		idx++;
	}
	return (range);
}
