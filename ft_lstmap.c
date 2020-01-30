/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:27:11 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/30 10:40:02 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*start;
	t_list	*aux;

	start = NULL;
	aux = NULL;
	if (lst && f)
	{
		while (lst)
		{
			if (!(element = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			if (!start)
				start = element;
			else
				aux->next = element;
			aux = element;
			lst = lst->next;
		}
	}
	return (start);
}
