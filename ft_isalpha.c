/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:34:01 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/02 11:02:01 by mauricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	unsigned short int	aux;

	aux = c;
	if ((aux >= 65 && aux <= 90) || (aux >= 97 && aux <= 122))
		return (1);
	else
		return (0);
}
