/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:57:57 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:18:21 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
       The ft_memset() function fills the first n bytes of the memory area
	   pointed to by s with the constant byte c.

	RETURN VALUE
       The ft_memset() function returns a pointer to the memory area s.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}
