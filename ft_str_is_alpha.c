/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:58:10 by regradul          #+#    #+#             */
/*   Updated: 2017/11/08 00:59:09 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_str_is_alpha(char *str)
{
	while (*str &&
			((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		++str;
	if (*str)
		return (0);
	return (1);
}
