/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:20:53 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/04 08:27:03 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst)
	{
		if (!new)
			new = ft_lstnew(NULL);
		if (new)
		{
			aux = *lst;
			*lst = new;
			new->next = aux;
		}
	}
}
