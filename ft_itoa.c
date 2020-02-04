/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:07:45 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/03 18:59:03 by mauricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*my_ft_charalloc(long aux, int size, int negative, char *str)
{
	if (!(str = (char *)malloc(size + 1 + negative)))
		return (NULL);
	str[size + negative] = 0;
	if (negative)
		str[0] = '-';
	if (!aux)
		str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*p_str;
	int		negative;
	size_t	size;
	long	aux;

	negative = 0;
	aux = n;
	if (n < 0)
	{
		negative = 1;
		aux *= -1;
	}
	size = 1;
	while (n /= 10)
		size++;
	p_str = NULL;
	if (!(p_str = my_ft_charalloc(aux, size, negative, p_str)))
		return (NULL);
	while (aux)
	{
		p_str[size + negative - 1] = (aux % 10) + '0';
		size--;
		aux /= 10;
	}
	return (p_str);
}
