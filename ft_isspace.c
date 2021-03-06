/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:56:51 by regradul          #+#    #+#             */
/*   Updated: 2017/11/09 23:24:13 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isspace(int c)
{
	if ((c == '\f') || (c == '\n') || (c == '\r') || (c == '\t')
			|| (c == '\v') || (c == ' '))
		return (1);
	else
		return (0);
}
