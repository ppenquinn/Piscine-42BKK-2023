/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:06:29 by nappalav          #+#    #+#             */
/*   Updated: 2023/08/03 17:06:43 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (void)
{
	write(1, "z", 1);
	return 0;
}