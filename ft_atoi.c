/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:04:19 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:31:01 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int a;
	int n;
	int signe;

	a = 0;
	n = 0;
	signe = 1;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n'
			|| str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
		a++;
	if (str[a] == '\0')
		return (0);
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			signe = -1;
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		n = (n * 10) + (str[a] - 48);
		a++;
	}
	return (n * signe);
}
