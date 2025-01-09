/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:16:41 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/10 00:18:58 by sehosaf          ###   ########.fr       */
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
	int		i;
	long	num;

	if (fd < 0)
		return ;
	i = 11;
	buffer[i] = '\0';
	num = n;
	if (num == 0)
		buffer[--i] = '0';
	if (num < 0)
		num = -num;
	while (num)
	{
		buffer[--i] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		buffer[--i] = '-';
	write(fd, buffer + i, 11 - i);
}
