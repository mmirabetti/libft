/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:12:34 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/07 10:23:21 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst)
	{
		aux = *lst;
		if (!new)
			new = ft_lstnew(NULL);
		if (new)
		{
			if (!aux)
			{
				*lst = new;
			}
			else
			{
				while (aux->next)
					aux = aux->next;
				aux->next = new;
			}
		}
	}
}
