/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:22 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/13 18:22:14 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			u;
	unsigned char	*p1;
	unsigned char	*p2;

	if (!n)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	u = 0;
	while (p1[u] == p2[u] && u < n - 1)
		u++;
	if (u == n)
		return (0);
	return (p1[u] - p2[u]);
}
