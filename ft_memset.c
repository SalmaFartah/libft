/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:50:50 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/16 15:41:33 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			u;
	unsigned char	*str;

	str = (unsigned char *)b;
	u = 0;
	while (u < len)
	{
		str[u] = c;
		u++;
	}
	return (b);
}
