/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:16:41 by sehosaf           #+#    #+#             */
/*   Updated: 2024/01/19 20:13:34 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Outputs the integer ’n’ to the given file descriptor.
	RETURN VALUE
		None
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	long	num;
	int		i;

	num = n;
	i = 11;
	if (num == 0)
		buffer[--i] = '0';
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		buffer[--i] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		buffer[--i] = '-';
	buffer[11] = '\0';
	write(fd, buffer + i, 11 - i);
}
