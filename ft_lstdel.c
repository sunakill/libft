/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:12:12 by regradul          #+#    #+#             */
/*   Updated: 2017/11/08 00:55:21 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *l;
	t_list *tmp;

	l = *alst;
	while (l != NULL)
	{
		tmp = l->next;
		(del)(l->content, l->content_size);
		free(l);
		l = tmp;
	}
	*alst = NULL;
}
