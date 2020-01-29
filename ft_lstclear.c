/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:27:25 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/29 08:42:22 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*aux;

	if (lst)
	{
		aux = *lst;
		while (aux)
		{
			next = aux->next;
			del(aux);
			aux = next;
		}
		*lst = NULL;
	}
}
