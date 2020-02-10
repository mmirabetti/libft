/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:36:22 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/10 19:58:08 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						mult;
	unsigned long long int	aux;

	mult = 1;
	if (!*str)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		mult = (*str == '-') ? -1 : 1;
		str++;
	}
	aux = 0;
	while (ft_isdigit(*str) && *str)
		aux = (aux * 10 + (*str++ - '0'));
	if (aux > LONG_MAX && mult == 1)
		return (-1);
	if (aux > LONG_MAX && mult == -1)
		return (0);
	return ((int)(aux * mult));
}
