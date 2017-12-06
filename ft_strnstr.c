/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:31:16 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:30:39 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	y;
	char	*occ;

	occ = 0;
	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[0])
		{
			occ = (char *)s1 + i;
			y = 0;
			while (s1[i + y] == s2[y] && (i + y) < n)
			{
				if (s2[y + 1] == '\0')
					return (occ);
				y++;
			}
			occ = 0;
		}
		i++;
	}
	return (0);
}
