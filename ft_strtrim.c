/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:51:16 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/13 18:23:17 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		st;
	int		nd;
	int		i;

	if (!s1 || !set)
		return (NULL);
	st = 0;
	nd = ft_strlen(s1);
	while (s1[st] && in_set(s1[st], set))
		st++;
	if (st != nd)
		while (s1[nd - 1] && in_set(s1[nd - 1], set))
			nd--;
	ptr = malloc(nd - st + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (st < nd)
		ptr[i++] = s1[st++];
	ptr[i] = '\0';
	return (ptr);
}
