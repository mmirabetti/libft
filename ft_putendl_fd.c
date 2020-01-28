/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:56:45 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/28 14:59:08 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		ft_putchar_fd(0, fd);
	else
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	write(fd, "\n", 1);
}
