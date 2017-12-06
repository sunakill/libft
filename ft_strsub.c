/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:34:11 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:39:30 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	s2 = ft_strnew(len);
	if (s2 == NULL)
		return (NULL);
	while (len > 0)
	{
		s2[i] = s[start + i];
		i++;
		len--;
	}
	return (s2);
}
