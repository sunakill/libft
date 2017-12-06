/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:09:46 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:49:22 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_len(int n)
{
	int i;
	int nb;

	i = 0;
	nb = n;
	if (n < 0)
	{
		i++;
		nb = -n;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static void			ft_fill(char *cp, int i, int abs, int n)
{
	while (i >= 0)
	{
		if (i == 0 && n < 0)
		{
			cp[i] = '-';
		}
		else
		{
			cp[i] = (abs % 10) + '0';
			abs = abs / 10;
		}
		i--;
	}
}

char				*ft_itoa(int n)
{
	char	*cp;
	int		t;
	int		abs;
	int		i;

	t = ft_len(n);
	cp = NULL;
	cp = (char *)malloc(sizeof(char) * (t + 1));
	abs = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (cp == NULL)
		return (NULL);
	i = t;
	cp[i] = '\0';
	i--;
	if (n < 0)
	{
		abs = -n;
	}
	ft_fill(cp, i, abs, n);
	return (cp);
}
