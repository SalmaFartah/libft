/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:15:22 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/11 19:11:42 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	u;

	u = 0;
	while (u <= ft_strlen(s))
	{
		if (s[u] == (unsigned char)c)
			return ((char *)&s[u]);
		u++;
	}
	return (NULL);
}
