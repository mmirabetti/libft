/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauricio <mmirabet@student.42sp.or...>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:59:00 by mauricio          #+#    #+#             */
/*   Updated: 2020/02/07 14:17:03 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = (size_t)(ft_strlen(s1) + ft_strlen(s2));
	if (!(joined = (char *)malloc(sizeof(char) * (total_len + 1))))
		return (NULL);
	ft_strcpy(joined, s1);
	ft_strlcat(joined, s2, (total_len + 1));
	return (joined);
}
