/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:26:00 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/17 21:52:24 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (dstsize <= ld)
		return (dstsize + ls);
	i = 0;
	while (src[i] && i < (dstsize - ld - 1))
	{
		dst[i + ld] = src[i];
		i++;
	}
	dst[i + ld] = '\0';
	return (ld + ls);
}
