/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:29:14 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/30 17:14:51 by sehosaf          ###   ########.fr       */
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
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)s1);
	if (s1_len < s2_len || n == 0)
		return (NULL);
	if (s2_len == 1)
		return ((char *)ft_memchr(s1, *s2, n));
	while (n-- >= s2_len)
	{
		if (ft_memcmp(s1, s2, s2_len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
