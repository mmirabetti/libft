/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:15:25 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/24 18:07:53 by mmirabet         ###   ########.fr       */
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

int	ft_findidx(char const *s, char const *set, char direction)
{
	 int	i;

	i = 0;
	if (direction == 'r')
		while (s[i] && ft_isonset(set, s[i]))
			i++;
	else if (direction == 'e')
	{
		while (s[i])
			i++;
		if (i > 0)
			i--;
		while (s[i] && --i >= 0 && ft_isonset(set, s[i]))
			;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;
	char	*trimmed;

	if (!s1)
		return (NULL);
	start = ft_findidx(s1, set, 'r');
	len = ft_findidx(s1, set, 'e') - start + 1;
	if (len < 0)
	{
		start = 0;
		len = 1;
	}	
	if (!(trimmed = ft_substr(s1, start, len)))
		return (NULL);
	return (trimmed);
}
