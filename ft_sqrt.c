/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:24:46 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 21:31:15 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_sqrt(int nb)
{
	int a;

	a = 0;
	if (nb > 0 && nb < 2147483647)
	{
		while (a * a != nb)
		{
			a++;
			if (a * a > nb)
				return (0);
		}
		return (a);
	}
		else return (0);
}
