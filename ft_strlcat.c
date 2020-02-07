/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:32:02 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/05 11:03:12 by mauricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (i < maxlen && s[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	dstlen = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	dstlen = my_strnlen(dst, dstsize);
	if (!dstsize)
		return (srclen);
	if (dstlen != dstsize)
	{
		while (i < (dstsize - dstlen - 1) && src[i])
		{
			*(dst + dstlen + i) = src[i];
			i++;
		}
		*(dst + dstlen + i) = 0;
	}
	return (dstlen + srclen);
}
