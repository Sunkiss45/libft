/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:58:06 by ebarguil          #+#    #+#             */
/*   Updated: 2021/02/01 14:04:12 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;
	t_list	*nxt;

	if (lst && *lst && del)
	{
		cur = *lst;
		while (cur)
		{
			nxt = cur->next;
			ft_lstdelone(cur, del);
			cur = nxt;
		}
		*lst = NULL;
	}
}
