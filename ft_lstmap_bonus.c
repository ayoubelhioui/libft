/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:39:09 by ael-hiou          #+#    #+#             */
/*   Updated: 2021/11/16 18:22:53 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*temp;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	temp = lst;
	while (temp != NULL)
	{
		newnode = ft_lstnew(f(temp -> content));
		if (!newnode)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, newnode);
		temp = temp -> next;
	}
	return (head);
}
