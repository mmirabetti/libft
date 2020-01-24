/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:02:28 by mmirabet          #+#    #+#             */
/*   Updated: 2020/01/24 15:13:11 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	char	*joined;

	if (!s1 && !s2)
		return (NULL);
	lens1 = 0;
	lens2 = 0;
	if (s1)
		lens1 = ft_strlen(s1);
	if (s2)
		lens2 = ft_strlen(s2);
	if (!(joined = (char *)malloc((lens1 + lens2 + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < lens1)
		joined[i] = s1[i];
	i = -1;
	while (++i < lens2)
		joined[i + lens1] = s2[i];
	joined[lens1 + lens2] = '\0';
	return (joined);
}
