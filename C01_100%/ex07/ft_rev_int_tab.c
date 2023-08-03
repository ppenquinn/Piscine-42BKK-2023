/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:55:52 by nappalav          #+#    #+#             */
/*   Updated: 2023/07/17 08:42:53 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx[2];

	idx[0] = 0;
	idx[1] = size - 1;
	while (idx[0] < idx[1])
	{
		ft_swap(&tab[idx[0]], &tab[idx[1]]);
		idx[0]++;
		idx[1]--;
	}
}

/*int main(void)
{
  	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int cnt = 0;

	ft_rev_int_tab(tab, size);
	while (cnt < size)
	{
		printf("%d ", tab[cnt]);
		cnt++;
	}
	return 0;
}*/
