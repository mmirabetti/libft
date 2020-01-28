/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.or...>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 11:14:42 by mauricio          #+#    #+#             */
/*   Updated: 2020/01/27 21:03:19 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_swipenalloc(char const *s, char c, size_t n, char **ptr)
{
	char	*start;
	char	*end;

	while (*s == c)
		s++;
	if (!*s)
	{
		if (!(ptr = (char**)malloc((n + 1) * sizeof(char *))))
			return (NULL);
		ptr[n] = (char *)NULL;
		return (ptr);
	}
	start = (char *)s;
	while (*s && *s != c)
	{
		end = (char *)s;
		s++;
	}
	if (!(ptr = ft_swipenalloc(s, c, n + 1, ptr)))
		return (NULL);
	ptr[n] = ft_substr(start, 0, end - start + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;

	if (!s)
		return (NULL);
	splitted = NULL;
	if (!(splitted = ft_swipenalloc(s, c, 0, splitted)))
		return (NULL);
	return (splitted);
}
