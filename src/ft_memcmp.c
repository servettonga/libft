/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 23:20:43 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:23:32 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_memcmp() function compares the first n bytes (each interpreted
		as unsigned char) of the memory areas s1 and s2.

	RETURN VALUE
		The ft_memcmp() function returns an integer less than, equal to, or
		greater than zero if the first n bytes of s1 is found, respectively,
		to be less than, to match, or be greater than the first n bytes of s2.

		For a nonzero return value, the sign is determined by the sign of the
		difference between the first pair of bytes (interpreted as unsigned
		char) that differ in s1 and s2.

    	If n is zero, the return value is zero.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (--n && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
