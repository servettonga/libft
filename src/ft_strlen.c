/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:09:52 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:32:17 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
       Calculates the length of the string pointed to by s,
	   excluding the terminating null byte ('\0').

	RETURN VALUE
       Returns the number of bytes in the string pointed to by s.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
