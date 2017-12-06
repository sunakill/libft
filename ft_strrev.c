/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:03:16 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 21:33:07 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		b;

	i = 0;
	b = (ft_strlen(str)) - 1;
	while (i < b)
	{
		tmp = str[b];
		str[b] = str[i];
		str[i] = tmp;
		i++;
		b--;
	}
	return (str);
}
