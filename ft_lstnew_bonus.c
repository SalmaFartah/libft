/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:55:31 by sfartah           #+#    #+#             */
/*   Updated: 2024/11/14 18:17:50 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nd;

	nd = malloc(sizeof(t_list));
	if (!nd)
		return (NULL);
	nd->content = content;
	nd->next = NULL;
	return (nd);
}
