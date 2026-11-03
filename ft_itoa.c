/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:16:48 by aait-abd          #+#    #+#             */
/*   Updated: 2026/10/23 00:50:23 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_putnbr(long n, char *str, int *i)
{
	if (n < 0)
	{
		str[*i] = '-';
		(*i)++;
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, str, i);
	str[*i] = n % 10 + '0';
	(*i)++;
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*res;
	long	nb;

	nb = n;
	count = ft_count_digits(nb);
	res = malloc(count + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	ft_putnbr(nb, res, &i);
	res[i] = '\0';
	return (res);
}
