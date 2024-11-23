/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:46:16 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/16 13:17:29 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long int	c;
	int					u;
	int					sign;

	c = 0;
	u = 0;
	sign = 1;
	while (str[u] == 32 || (str[u] >= 9 && str[u] <= 13))
		u++;
	if (str[u] == '-' || str[u] == '+')
	{
		if (str[u] == '-')
			sign = -1;
		u++;
	}
	while (str[u] >= '0' && str[u] <= '9')
	{
		c = c * 10 + (str[u] - 48);
		if (c > LONG_MAX && sign == 1)
			return (-1);
		if (c > LONG_MAX && sign == -1)
			return (0);
		u++;
	}
	return (sign * c);
}
