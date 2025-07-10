/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 12:13:45 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-10 12:13:45 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*helper(void *content, t_list **head, t_list **tail,
		void (*del)(void *))
{
	if (!(*head))
	{
		*head = ft_lstnew(content);
		if (!(*head))
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		*tail = *head;
	}
	else
	{
		(*tail)->next = ft_lstnew(content);
		if (!(*tail)->next)
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		*tail = (*tail)->next;
	}
	return (*head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*trav;
	t_list	*head;
	t_list	*tail;

	trav = lst;
	head = NULL;
	tail = NULL;
	while (trav)
	{
		if (!helper(f(trav->content), &head, &tail, del))
			return (NULL);
		trav = trav->next;
	}
	return (head);
}
