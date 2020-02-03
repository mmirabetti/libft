/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:33:31 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/03 15:19:59 by mauricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s || !(ptr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (start >= ft_strlen(s)) 
		*ptr = '\0';
	else
	{
		i = 0;
		while (i < len && s[i])
		{
			ptr[i] = s[start + i];
			i++;
		}
		ptr[len] = '\0';
	}
	return (ptr);
}
