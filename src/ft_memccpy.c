/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:24:08 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:24:20 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The  ft_memccpy() function copies no more than n bytes from memory area
		src to memory area dest, stopping when the character c is found.

		If the memory areas overlap, the results are undefined.

	RETURN VALUE
		The ft_memccpy() function returns a pointer to the next character in dest
		after c, or NULL if c was not found in the first n characters of src.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		chr;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	chr = (unsigned char)c;
	while (n--)
	{
		*d++ = *s;
		if (*s++ == chr)
			return (d);
	}
	return (NULL);
}
