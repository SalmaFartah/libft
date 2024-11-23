/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:56:19 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/17 14:34:44 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt(long nbr)
{
	int	sz;

	if (nbr == 0)
		return (1);
	sz = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		sz++;
	}
	while (nbr > 0)
	{
		sz++;
		nbr /= 10;
	}
	return (sz);
}

static void	fill(long nbr, char *st, int sz)
{
	(nbr < 0) && (st[0] = '-') && (nbr *= -1);
	while (nbr > 0)
	{
		st[sz - 1] = nbr % 10 + '0';
		nbr /= 10;
		sz--;
	}
}

char	*ft_itoa(int nbr)
{
	long	nz;
	char	*st;

	nz = (long)nbr;
	st = malloc(cnt(nz) + 1);
	if (!st)
		return (NULL);
	st[cnt(nz)] = '\0';
	if (nz == 0)
		st[0] = '0';
	else
		fill(nz, st, cnt(nbr));
	return (st);
}
