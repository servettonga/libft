/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:17:42 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/30 18:10:27 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The ft_strdup() function returns a pointer to a new string which is a
		duplicate of the string s.  Memory for the new string is obtained with
		malloc(3), and can be freed with free(3).

	RETURN VALUE
		On success, the strdup() function returns a pointer to the duplicated
		string. It returns NULL if insufficient memory was available, with errno
		set to indicate the cause of the error.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	dup = (char *)ft_calloc((len + 1), sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	dup[len] = '\0';
	return (dup);
}
