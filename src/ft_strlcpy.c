/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:45:07 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/30 13:43:31 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_strlcpy() and ft_strlcat() functions take the full size of the
		buffer (not just the length) and guarantee to NUL-terminate the result
		(as long as size is larger than 0 or, in the case of ft_strlcat(), as
		long as there is at least one byte free in dst). Note that a byte for
		the NUL	should be included in size. Also note that ft_strlcpy() and
		ft_strlcat() only operate on true ''C'' strings. This means that for
		ft_strlcpy() src must be NUL-terminated and for ft_strlcat() both src
		and dst must be	NUL-terminated.

		The ft_strlcpy() function copies up to size - 1 characters from the
		NUL-terminated string src to dst, NUL-terminating the result.

		The ft_strlcat() function appends the NUL-terminated string src to the
		end of dst. It will append at most size - ft_strlen(dst) - 1 bytes,
		NUL-terminating the result.

	RETURN VALUE
		The ft_strlcpy() and ft_strlcat() functions return the total length
		of the string they tried to create. For ft_strlcpy() that means the
		length of src. For ft_strlcat() that means the initial length of dst plus
		the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0 && src && dst)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
