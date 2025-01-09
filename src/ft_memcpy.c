/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:09:10 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:19:26 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The  ft_memcpy() function copies n bytes from memory area src to memory
		area dest. The memory areas must not overlap. Use ft_memmove() if
		the memory areas do overlap.

	RETURN VALUE
		The ft_memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
