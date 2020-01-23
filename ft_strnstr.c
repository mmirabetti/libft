/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:29:45 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/23 09:17:54 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lenaux;
	char	*pos;
	char	*ptrn;

	if (!*needle || !len)
		return ((char *)haystack);
	lenaux = 0;
	while (*haystack)
	{
		if (++lenaux > len)
			return (NULL);
		if (*haystack == *needle)
		{
			ptrn = (char *)needle;
			pos = (char *)haystack;
			while (*(++haystack) == *(++ptrn) && ++lenaux < len && *ptrn)
				;
			if (!*ptrn)
				return (pos);
			if (!*haystack)
				return (NULL);
		}
		haystack++;
	}
	return (NULL);
}
