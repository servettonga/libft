/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:14:37 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/10 00:18:43 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Outputs the string ’s’ to the given file descriptor,
		followed by a newline.
	RETURN VALUE
		None
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
