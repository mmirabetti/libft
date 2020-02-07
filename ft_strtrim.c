/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauricio <mmirabet@student.42sp.or...>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:28:54 by mauricio          #+#    #+#             */
/*   Updated: 2020/02/07 18:43:44 by mauricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	long	begin;
	long	end;
	size_t	i;
	char	*substr;

	if (!s1 || !set)
		return (NULL);
	if (!ft_strlen(set))
		return (ft_strdup(s1));
	begin = -1;
	end = 0;
	i = 0;
	while (s1[i])
	{
		begin = (begin < 0 && !ft_strchr(set, s1[i])) ? (long)i : begin;
		end = (!ft_strchr(set, s1[i])) ? (long)i : end;
		i++;
	}
	if (begin < 0)
		return (ft_substr(s1, 0, 0));
	else if (!(substr = ft_substr(s1, begin, end - begin + 1)))
		return (NULL);
	return (substr);
}
