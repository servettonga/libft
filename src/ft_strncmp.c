/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:03:18 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:57:57 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_strncmp() function lexicographically compare the null-terminated
		strings s1 and s2. The function compares not more than n characters.
		Because it is designed for comparing strings rather than binary data,
		characters that appear after a ‘\0’ character are not compared.

	RETURN VALUE
		The ft_strncmp() function return an integer greater than, equal to, or
		less than 0, according as the string s1 is greater than, equal to, or
		less than the string s2.  The comparison is done using unsigned
		characters, so that ‘\200’ is greater than ‘\0’.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
