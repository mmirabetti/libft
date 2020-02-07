/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:36:22 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/24 12:37:53 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	i;
	int			mult;

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
		i = (i * 10 + (*str - '0'));
		str++;
	}
	return ((int)(i * mult));
}
