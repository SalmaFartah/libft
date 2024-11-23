/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:21:44 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/06 15:15:03 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		u;
	char	*ptr;

	ptr = malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	u = 0;
	while (s1[u])
	{
		ptr[u] = s1[u];
		u++;
	}
	ptr[u] = '\0';
	return (ptr);
}
