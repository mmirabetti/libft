/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:32:02 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/22 13:00:46 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	mystrlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	dstlen = mystrlen(dst);
	srclen = mystrlen(src);
	if (dstlen > dstsize)
		return (dstsize + srclen);
	if (dstsize && dstlen < (dstsize - 1))
		while (i < (dstsize - dstlen - 1) && *(src + i))
		{
			*(dst + dstlen + i) = *(src + i);
			i++;
		}
	*(dst + dstlen + i) = 0;
	return (dstlen + srclen);
}
