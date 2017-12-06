/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regradul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:14:49 by regradul          #+#    #+#             */
/*   Updated: 2017/11/13 23:00:35 by regradul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list	*elem))
{
	t_list *lst2;
	t_list *tmp;
	t_list *lst2_head;

	lst2_head = NULL;
	tmp = NULL;
	while (lst != NULL)
	{
		lst2 = (f)(lst);
		if (tmp != NULL)
			tmp->next = lst2;
		else
			lst2_head = lst2;
		lst = lst->next;
		tmp = lst2;
	}
	return (lst2_head);
}
