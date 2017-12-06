/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:23:58 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 17:27:13 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		a;
	int		j;
	char	*copie;

	a = ft_strlen(s);
	copie = (char*)malloc(sizeof(char) * a + 1);
	if (copie == NULL)
		return (NULL);
	j = 0;
	while (j < a)
	{
		copie[j] = s[j];
		j++;
	}
	copie[j] = '\0';
	return (copie);
}
