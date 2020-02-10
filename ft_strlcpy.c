/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 09:21:12 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/24 12:39:03 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;

	lensrc = 0;
	if (!dst || !src)
		return (0);
	while (src[lensrc])
		lensrc++;
	if (!dstsize)
		return (lensrc);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (lensrc);
}
