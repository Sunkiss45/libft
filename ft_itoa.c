/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:06:40 by ebarguil          #+#    #+#             */
/*   Updated: 2021/01/11 15:44:22 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_abs(long int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int		ft_nbr_len(long int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int		is_neg(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		neg;
	int		count;

	neg = is_neg(n);
	count = ft_nbr_len((long int)n);
	if (!(s = malloc(sizeof(char) * count + 1)))
		return (NULL);
	s[count] = '\0';
	count--;
	while (count >= 0)
	{
		s[count] = ft_abs((long int)n % 10) + '0';
		n = ft_abs((long int)n / 10);
		count--;
	}
	if (neg == -1)
		s[0] = '-';
	return (s);
}
