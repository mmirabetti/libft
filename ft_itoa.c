/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauricio <mmirabet@student.42sp.or...>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:00:21 by mauricio          #+#    #+#             */
/*   Updated: 2020/02/07 13:36:19 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_countdigits(int n)
{
	size_t	count;
	long	aux;

	aux = (long)n;
	count = 0;
	if (n <= 0)
		count++;
	while (aux)
	{
		count++;
		aux /= 10;
	}
	return (count);
}

static char		*my_allocatenprepare(size_t size, char negative)
{
	char	*string;

	if (!(string = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (negative)
		string[0] = '-';
	string[size] = '\0';
	return (string);
}

char			*ft_itoa(int n)
{
	char	*ret;
	size_t	size;
	long	aux;

	size = my_countdigits(n);
	if (!(ret = my_allocatenprepare(size, (n < 0))))
		return (NULL);
	if (!n)
		ret[0] = '0';
	aux = (n < 0) ? -(long)n : (long)n;
	size--;
	while (aux)
	{
		ret[size] = (aux % 10) + '0';
		size--;
		aux /= 10;
	}
	return (ret);
}
