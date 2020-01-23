/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 09:20:41 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/23 15:34:10 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned char	t_unsgch;

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	if (*(t_unsgch*)s1 == *(t_unsgch*)s2)
		while (n && *(t_unsgch*)s1 == *(t_unsgch*)s2 && *s1 && *s2)
		{
			n--;
			s1++;
			s2++;
		}
	if (!n)
		return (0);
	else if (n && !*s1 && !*s2)
		return (0);
	else if (*(t_unsgch*)s1 < *(t_unsgch*)s2)
		return (-1);
	else
		return (1);
}
