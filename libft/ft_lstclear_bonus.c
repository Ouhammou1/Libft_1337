/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:40:48 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/09 17:55:03 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = p;
	}
	*lst = NULL;
}
