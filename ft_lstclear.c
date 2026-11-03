/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:40:01 by aait-abd          #+#    #+#             */
/*   Updated: 2026/10/24 18:20:24 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*copy;
	t_list	*address;

	if (lst == NULL || del == NULL)
		return ;
	copy = *lst;
	while (copy != NULL)
	{
		address = copy;
		del(copy -> content);
		copy = copy -> next;
		free(address);
	}
	*lst = NULL;
}
