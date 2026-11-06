/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <aait-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:23:40 by aait-abd          #+#    #+#             */
/*   Updated: 2026/11/06 01:03:51 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_map(void *content, t_list **new_list, void (*del)(void *))
{
	del(content);
	ft_lstclear(new_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*copy;
	t_list	*node;
	void	*content;

	if (f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	copy = NULL;
	while (lst != NULL)
	{
		content = f(lst -> content);
		node = ft_lstnew(content);
		if (node == NULL)
			return (ft_free_map(content, &new_list, del));
		if (new_list == NULL)
			new_list = node;
		else
			copy -> next = node;
		copy = node;
		lst = lst -> next;
	}
	return (new_list);
}
