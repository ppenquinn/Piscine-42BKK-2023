/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:07:02 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/17 08:43:27 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx[2];

	idx[0] = 0;
	while (idx[0] < size)
	{
		idx[1] = 0;
		while (idx[1] < (size - idx[0] - 1))
		{
			if (tab[idx[1]] > tab[idx[1] + 1])
				ft_swap(&tab[idx[1]], &tab[idx[1] + 1]);
			idx[1]++;
		}
		idx[0]++;
	}
}
