/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:56:44 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/10 13:38:34 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	b;

	b = ft_strlen(s);
	while (b >= 0)
	{
		if (s[b] == (unsigned char)c)
			return ((char *)s + b);
		b--;
	}
	return (NULL);
}
