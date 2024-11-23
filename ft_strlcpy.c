/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:53:14 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/06 15:11:25 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	u;

	u = 0;
	if (dstsize != 0)
	{
		while (src[u] && u < dstsize - 1)
		{
			dst[u] = src[u];
			u++;
		}
		dst[u] = '\0';
	}
	return (ft_strlen(src));
}
