/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:11:56 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/17 15:25:25 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				u;

	if (dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	u = 0;
	while (u < n)
	{
		d[u] = s[u];
		u++;
	}
	return (dst);
}
