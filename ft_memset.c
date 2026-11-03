/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <aait-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:35:00 by aait-abd          #+#    #+#             */
/*   Updated: 2026/11/02 15:38:49 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;     
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}