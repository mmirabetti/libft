/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:33:31 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/31 10:30:42 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(ptr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
