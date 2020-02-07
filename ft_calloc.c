/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 09:32:21 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/24 10:21:04 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	i;
	unsigned char	*ptr;

	i = 0;
	if ((ptr = (malloc((unsigned long)count * size))))
		while (i < count * size)
		{
			*(ptr + i) = 0;
			i++;
		}
	return ((void *)ptr);
}
