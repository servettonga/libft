/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:29:14 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:53:32 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_strnstr() function locates the first occurrence of the null
		terminated string s2 in the string s1, where not more than n
		characters are searched. Characters that appear after a `\0' character
		are not searched.

	RETURN VALUE
		If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
     	NULL is returned; otherwise a pointer to the first character of the first
     	occurrence of s2 is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	l_len;

	if (!*s2)
		return ((char *)s1);
	l_len = ft_strlen(s2);
	while (*s1 && n >= l_len)
	{
		if (!ft_strncmp(s1, s2, l_len))
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
