/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:04:08 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:16:51 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_bzero() function erases the data in the n bytes of the memory
		starting at the location pointed to by s, by writing zeros (bytes
		containing '\0') to that area.

	RETURN VALUE
		None.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
