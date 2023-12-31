/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:39:50 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/29 23:08:38 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_memmove() function copies count bytes of src to dest.
		This function allows copying between objects that might overlap as
		copying direction is determined	by the value of the arguments.

		By copying forward and backward, ft_memmove() ensures that it will
		not	end up overwriting source bytes before they get copied over to
		the	destination.

		Copying forward from lower to higher memory addresses is generally
		more efficient than copying backward on most architectures.

	RETURN VALUE
		The ft_memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if ((!dest || !src) || n >= SIZE_MAX)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest < src)
		while (n--)
			*d++ = *s++;
	else if (dest > src && dest < src + n)
		while (n--)
			d[n] = s[n];
	return (dest);
}
