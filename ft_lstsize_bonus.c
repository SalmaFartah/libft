/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:05:56 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/17 14:02:47 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*last;
	int		count;

	if (!lst)
		return (0);
	count = 0;
	last = lst;
	while (last)
	{
		count += 1;
		last = last->next;
	}
	return (count);
}
