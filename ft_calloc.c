/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <aait-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:34:42 by aait-abd          #+#    #+#             */
/*   Updated: 2026/11/03 00:12:06 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*ptr;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	total = nmemb * size;
	if (total == 0)
		return (malloc(1));
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
