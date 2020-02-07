/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauricio <mmirabet@student.42sp.or...>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 08:22:50 by mauricio          #+#    #+#             */
/*   Updated: 2020/02/07 13:12:55 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !substr)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		substr[0] = '\0';
		return (substr);
	}
	i = 0;
	while (i < len && ((char *)s)[start])
	{
		substr[i] = ((char *)s)[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
