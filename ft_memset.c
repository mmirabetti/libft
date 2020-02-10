/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:36:10 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/21 08:46:45 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	if (len > 0)
	{
		while (len--)
		{
			*(unsigned char *)(b + len) = (unsigned char)(c);
		}
	}
	return (b);
}
