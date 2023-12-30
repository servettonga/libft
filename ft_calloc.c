/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:32:21 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/30 18:05:38 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_calloc() function contiguously allocates enough space for count
		objects that are size bytes of memory each and returns a pointer to	the
		allocated memory.  The allocated memory is filled with bytes of	value
		zero.

	RETURN VALUE
		If successful, the ft_calloc() function return a pointer to allocated
		memory. If there is an error, it returns a NULL pointer and set errno
		to ENOMEM.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size <= 0 || count <= 0)
	{
		size = 1;
		count = 1;
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
