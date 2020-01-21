/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:41:55 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/21 16:48:40 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if ((n > 0) && (dst || src))
	{
		while ((i < n) && *(unsigned char *)(src + i) != (unsigned char)c)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	if (i == n)
	{
		return (NULL);
	}
	else
	{
		*(unsigned char *)(dst + i) = (unsigned char)c;
		return (dst + i + 1);
	}
}
