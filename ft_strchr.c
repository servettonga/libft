/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:14:10 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/30 17:24:18 by sehosaf          ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	size_t			s_len;
	unsigned char	cc;
	const char		*p;

	cc = c;
	s_len = ft_strlen(s);
	p = s;
	if (cc == '\0')
		return ((char *)p + s_len);
	while (*p && *p != cc)
		p++;
	if (*p == cc)
		return ((char *)p);
	return (NULL);
}
