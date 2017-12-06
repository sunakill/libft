/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:14:40 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 21:30:33 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_iterative_factorial(int nb)
{
	int tmp;

	tmp = nb;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb <= 1)
		return (1);
	while (tmp > 1)
	{
		nb = nb * (tmp - 1);
		tmp--;
	}
	return (nb);
}
