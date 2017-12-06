/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:15:40 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:31:26 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char *s;

	s = (char *)malloc(size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (int)size);
	return ((void *)s);
}
