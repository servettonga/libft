/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:02:01 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:54:15 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Allocates (with malloc()) and returns a copy of ’s1’ with the characters
		specified in ’set’ removed from the beginning and the end of the string.

	RETURN VALUE
		The trimmed string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}
