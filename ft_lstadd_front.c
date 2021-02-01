/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:47:30 by ebarguil          #+#    #+#             */
/*   Updated: 2021/01/12 10:13:20 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *nlst)
{
	t_list	*ptr;

	if (!alst)
		return ;
	if (!*alst)
		*alst = nlst;
	else if (*alst && nlst)
	{
		ptr = *alst;
		nlst->next = ptr;
		*alst = nlst;
	}
}
