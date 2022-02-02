/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:46:53 by ael-hiou          #+#    #+#             */
/*   Updated: 2021/11/16 11:50:19 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	if (len == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (i > 0)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i--;
	}
	((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
