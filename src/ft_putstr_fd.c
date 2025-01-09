/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:09:34 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/10 00:18:33 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Outputs the string ’s’ to the given file descriptor.
	RETURN VALUE
		None
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
