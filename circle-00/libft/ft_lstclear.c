/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 11:23:03 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-10 11:23:03 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*trav;
	t_list	*tmp;

	trav = *lst;
	while (trav)
	{
		tmp = trav->next;
		ft_lstdelone(trav, del);
		trav = tmp;
	}
	*lst = NULL;
}
