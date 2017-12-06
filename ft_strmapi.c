/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:28:18 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:34:48 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	int		a;

	a = 0;
	if (s != NULL && f != NULL)
	{
		ss = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (ss == NULL)
			return (NULL);
		while (s[a] != '\0')
		{
			ss[a] = f(a, s[a]);
			a++;
		}
		ss[a] = '\0';
		return (ss);
	}
	return (0);
}
