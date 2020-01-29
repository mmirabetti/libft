/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:27:11 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/29 13:14:04 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*my_ft_lstnew(void *content)
{
	t_list	*element;

	if (!(element = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*aux;

	aux = NULL;
	if (lst && f)
	{
		ft_lstiter(lst, (void *)f);
		if (!(element = my_ft_lstnew(lst->content)))
			return (NULL);
		aux = element;
		lst = lst->next;
		while (lst)
		{
			if (!(element->next = my_ft_lstnew(lst->content)))
			{
				ft_lstclear(&aux, del);
				return (NULL);
			}
			element = element->next;
			lst = lst->next;
		}
	}
	return (aux);
}
