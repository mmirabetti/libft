/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:27:25 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/04 10:08:48 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*aux;

	if (lst && del)
	{
		aux = *lst;
		while (aux)
		{
			next = aux->next;
			del(aux->content);
			free(aux);
			aux = next;
		}
		*lst = NULL;
	}
}
