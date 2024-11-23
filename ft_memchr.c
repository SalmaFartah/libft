/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:00:23 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/14 16:44:03 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mm;
	size_t			u;

	mm = (unsigned char *)s;
	u = 0;
	while (u < n)
	{
		if (mm[u] == (unsigned char)c)
			return ((void *)mm + u);
		u++;
	}
	return (NULL);
}
