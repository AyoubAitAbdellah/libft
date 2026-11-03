/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <aait-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:54:23 by aait-abd          #+#    #+#             */
/*   Updated: 2026/11/03 17:15:49 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_overflow_check(const char *str, int i, int sign)
{
	long	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (LONG_MAX - (str[i] - '0')) / 10)
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			return ((int)LONG_MIN);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)result * sign);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (ft_overflow_check(str, i, sign));
}