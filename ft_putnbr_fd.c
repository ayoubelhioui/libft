/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:53:39 by ael-hiou          #+#    #+#             */
/*   Updated: 2021/11/15 13:36:43 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	s;
	int		currentdigit;

	s = n;
	currentdigit = 0;
	if (fd >= 0)
	{
		if (s < 0)
		{
			s *= -1;
			write(fd, "-", 1);
		}
		if (s >= 10)
		{
			ft_putnbr_fd(s / 10, fd);
			currentdigit = (s % 10) + 48;
			write(fd, &currentdigit, 1);
		}
		else
		{
			currentdigit = s + 48;
			write(fd, &currentdigit, 1);
		}
	}
}
