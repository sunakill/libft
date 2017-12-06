/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:32:20 by regradul          #+#    #+#             */
/*   Updated: 2017/11/12 20:24:50 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char		*ft_str_advance(const char *s, char c, int skip)
{
	if (skip)
		while (*s != '\0' && *s == c)
			s++;
	else
		while (*s != '\0' && *s != c)
			s++;
	return (s);
}

static int				ft_str_count_splits(const char *s, char seps)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s = ft_str_advance(s, seps, 1);
		if (*s != '\0')
		{
			i++;
			s = ft_str_advance(s, seps, 0);
		}
	}
	return (i);
}

static char				**ft_table_delete(char **ret, int len)
{
	int i;

	i = 0;
	while (i < len)
		free(ret[i]);
	free(ret);
	return (NULL);
}

char					**ft_strsplit(char const *s, char c)
{
	char		**ret;
	int			i;
	const char	*next;

	if (s == NULL)
		return (NULL);
	ret = (char**)malloc(sizeof(char*) * (ft_str_count_splits(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		s = ft_str_advance(s, c, 1);
		if (*s != '\0')
		{
			next = ft_str_advance(s, c, 0);
			ret[i] = ft_strsub(s, 0, next - s);
			if (ret[i] == NULL)
				return (ft_table_delete(ret, i));
			i++;
			s = next;
		}
	}
	ret[i] = 0;
	return (ret);
}
