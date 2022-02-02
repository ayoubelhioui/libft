/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:00:30 by ael-hiou          #+#    #+#             */
/*   Updated: 2021/11/16 15:16:11 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = (int)ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)&s[a + 1]);
	while (a >= 0)
	{
		if (s[a] == (char)c)
			return ((char *)&s[a]);
		a--;
	}
	return (NULL);
}
