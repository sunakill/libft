/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:44:42 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 22:46:49 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			*ft_range(int min, int max)
{
	int a;
	int *tab;

	a = 0;
	if (max - min <= 0)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	while (0 < max - min)
	{
		tab[a++] = min++;
	}
	return (tab);
}
