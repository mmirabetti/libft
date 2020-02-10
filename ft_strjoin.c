/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:59:00 by mmirabet          #+#    #+#             */
/*   Updated: 2020/02/10 18:03:32 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(joined = (char *)malloc(sizeof(char) * (total_len + 1))))
		return (NULL);
	while (*s1)
		*(joined++) = *(s1++);
	while (*s2)
		*(joined++) = *(s2++);
	*joined = '\0';
	return (joined - total_len);
}
