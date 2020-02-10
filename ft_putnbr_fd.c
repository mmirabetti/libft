/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 15:01:00 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/10 18:45:05 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	digit = (n < 0) ? -(n % 10) : n % 10;
	if (n > -10 && n < 10)
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
	}
	else
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(digit + '0', fd);
}
