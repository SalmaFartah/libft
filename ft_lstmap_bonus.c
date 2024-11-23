/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:40:06 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/13 19:35:36 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*help;
	void	*rf;

	nlist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		rf = f(lst->content);
		help = ft_lstnew(rf);
		if (!help)
		{
			del (rf);
			ft_lstclear (&nlist, (void *)del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, help);
		lst = lst->next;
	}
	return (nlist);
}
