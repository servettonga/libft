/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:38:21 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:37:04 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_strchr() function locates the first occurrence of c (converted
		to a char) in the string pointed to by s. The terminating null character
		is considered to be part of the string; therefore if c is ‘\0’, the
		functions locate the terminating ‘\0’.

		The ft_strrchr() function is identical to ft_strchr(), except it locates
		the last occurrence of c.

	RETURN VALUE
		The functions return a pointer to the located character, or NULL if the
		character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)last);
}
