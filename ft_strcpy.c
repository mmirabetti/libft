/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.or...>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:21:41 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/07 14:09:26 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	idx;

	idx = 0;
	while (src[idx])
	{
		dest[idx] = ((char *)src)[idx];
		idx++;
	}
	dest[idx] = ((char *)src)[idx];
	return (dest);
}
