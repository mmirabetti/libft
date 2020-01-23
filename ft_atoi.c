/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:36:22 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/23 17:30:25 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int	i;
	int	mult;

	i = 0;
	mult = 1;
	if (!*str)
		return (0);
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' \
		|| *str == '\f' || *str == ' ' || !*str)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mult = -1;
		if (*str)
			str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		i = i * 10 + ((int)*str - (int)'0');
		str++;
	}
	return (i * mult);
}
