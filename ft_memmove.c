/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:57:10 by ebarguil          #+#    #+#             */
/*   Updated: 2021/01/12 14:30:28 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	i = 0;
	if (s1 == s2 || (s1 == NULL && s2 == NULL))
		return (s1);
	if (s2 < s1)
		while (len--)
			s1[len] = s2[len];
	else
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	return (s1);
}
