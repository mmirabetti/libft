/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:49:18 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/22 09:11:34 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned char *t_uc_ptr;

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n > 0 && (s1 || s2))
	{
		while (i < n && *(t_uc_ptr)(s1 + i) == *(t_uc_ptr)(s2 + i))
			i++;
		if (i == n)
			return (0);
		else
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	}
	return (0);
}
