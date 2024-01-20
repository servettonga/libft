/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 23:09:13 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/29 23:19:46 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_memchr() function scans the initial n bytes of the memory area
		pointed to by s for the first instance of c. Both c and the bytes of
		the memory area pointed to by s are interpreted as unsigned char.

	RETURN VALUE
		The ft_memchr() function return a pointer to the matching byte or
		NULL if the character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i++ < n)
		if (*p++ == (unsigned char)c)
			return ((void *)p - 1);
	return (NULL);
}
