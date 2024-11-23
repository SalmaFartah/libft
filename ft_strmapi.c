/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:31:28 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/17 14:30:17 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		u;
	char	*p;

	if (!s || !f)
		return (NULL);
	u = 0;
	p = malloc(ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	while (s[u])
	{
		p[u] = f(u, (char)s[u]);
		u++;
	}
	p[u] = '\0';
	return (p);
}
