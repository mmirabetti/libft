/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:44:29 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/21 17:23:55 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if ((len > 0) && (dst || src))
	{
		if (src < dst)
			while (len--)
			{
				*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
			}
		else
		{
			while (i < len)
			{
				*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
				i++;
			}
		}
	}
	return (dst);
}
