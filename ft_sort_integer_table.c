/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:10:07 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 21:32:27 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_sort_integer_table(int *tab, int size)
{
	int a;
	int b;
	int tmp;

	a = 0;
	while (a++ < size)
	{
		b = 0;
		while (b < size - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				tmp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = tmp;
			}
			++b;
		}
	}
}
