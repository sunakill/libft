/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:37:06 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:25:30 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	c2;

	str = (unsigned char*)s;
	c2 = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (str[i] == c2)
			return (str + i);
		i++;
		n--;
	}
	return (NULL);
}
