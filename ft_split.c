/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 09:44:07 by ebarguil          #+#    #+#             */
/*   Updated: 2021/01/22 12:37:12 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (i && s[i - 1] != c)
			j++;
	}
	return (j);
}

char	*ft_strcut(char const *s, char c)
{
	size_t	i;
	char	*new_s;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(new_s = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

char	**ft_split2(char const *s, char c, size_t j, char **new)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (k < j)
		{
			new[k] = ft_strcut(&s[i], c);
			k++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	new[k] = 0;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	j;

	if (!s)
		return (NULL);
	j = ft_count_words(s, c);
	if (!(new = malloc(sizeof(new) * (j + 1))))
		return (NULL);
	new = ft_split2(s, c, j, new);
	return (new);
}
