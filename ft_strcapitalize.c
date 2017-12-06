/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:50:06 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:32:00 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char				*ft_strcapitalize(char *str)
{
	char *s1;

	s1 = str;
	while (*s1 != '\0')
	{
		if (ft_alphanum(*(s1 - 1)) && *s1 >= 'A' && *s1 <= 'Z')
			*s1 = *s1 + 32;
		if (!ft_alphanum(*(s1 - 1)) && *s1 >= 'a' && *s1 <= 'z')
			*s1 = *s1 - 32;
		s1++;
	}
	return (str);
}
