/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 10:58:53 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-10 10:58:53 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*prev;
	t_list	*trav;

	prev = NULL;
	trav = lst;
	while (trav)
	{
		prev = trav;
		trav = trav->next;
	}
	return (prev);
}
