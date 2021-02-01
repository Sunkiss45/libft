/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:33:10 by ebarguil          #+#    #+#             */
/*   Updated: 2021/01/06 14:40:40 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	i;

	i = 0;
	x = ft_strlen(src);
	y = ft_strlen(dst);
	if (dstsize <= y)
		return (dstsize + x);
	i = 0;
	while (dstsize && (dstsize - y - 1) && src[i])
	{
		dst[y + i] = src[i];
		i++;
		dstsize--;
	}
	dst[y + i] = '\0';
	return (x + y);
}
