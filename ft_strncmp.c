/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:08:21 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/13 18:34:33 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	u;

	u = 0;
	while ((s1[u] || s2[u]) && s1[u] == s2[u] && u < n)
		u++;
	if (u == n)
		return (0);
	return ((unsigned char)s1[u] - (unsigned char)s2[u]);
}
