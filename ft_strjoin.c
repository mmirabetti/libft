/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauricio <mmirabet@student.42sp.or...>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:59:00 by mauricio          #+#    #+#             */
/*   Updated: 2020/02/07 10:46:46 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	to_copy;

	to_copy = (!s1) ? 0 : ft_strlen(s1);
	to_copy += (!s2) ? 0 : ft_strlen(s2);
	if (!(joined = (char *)malloc(sizeof(char) * to_copy + 1)))
		return (NULL);
	*joined = '\0';
	if (s1)
		ft_strlcat(joined, s1, to_copy + 1);
	if (s2)
		ft_strlcat(joined, s2, to_copy + 1);
	joined[to_copy] = '\0';
	return (joined);
}
