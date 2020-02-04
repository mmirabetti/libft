/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:15:25 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/02 16:56:54 by mauricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isonset(char const *set, char character)
{
	while (*set)
	{
		if (character == *set)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_isonset(set, *s1))
		s1++;
	if (!*s1)
	{
		if (!(trimmed = (char *)malloc(1 * sizeof(char *))))
			return (NULL);
		trimmed[0] = 0;
		return (trimmed);
	}
	start = (char *)s1;
	while (*s1)
	{
		if (!ft_isonset(set, *s1))
			end = (char *)s1;
		s1++;
	}
	if (!(trimmed = ft_substr(start, 0, end - start + 1)))
		return (NULL);
	return (trimmed);
}
