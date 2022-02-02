/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:32:27 by ael-hiou          #+#    #+#             */
/*   Updated: 2021/11/16 14:17:28 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	size = ft_strlen(needle);
	if (size == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (i <= len - size && haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (j == size - 1)
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
