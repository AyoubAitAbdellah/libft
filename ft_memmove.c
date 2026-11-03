/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <aait-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:51:52 by aait-abd          #+#    #+#             */
/*   Updated: 2026/11/02 21:33:46 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	unsigned char		*str2;

	str1 = (const unsigned char *)src;
	str2 = (unsigned char *)dest;
	if (str2 < str1)
	{
		i = 0;
		while (i < n)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			str2[i] = str1[i];
		}
	}
	return (dest);
}
