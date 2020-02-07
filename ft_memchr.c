/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:28:24 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/22 10:48:49 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = (void *)s;
	if (n > 0)
	{
		while (i < n)
		{
			if (*(unsigned char*)(s + i) == (unsigned char)c)
				return (ptr + i);
			i++;
		}
	}
	return (NULL);
}
