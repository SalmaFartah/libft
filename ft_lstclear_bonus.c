/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:18:50 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/14 14:40:10 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*swp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		swp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = swp;
	}
	free(*lst);
	*lst = NULL;
}
