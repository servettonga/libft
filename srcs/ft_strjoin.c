/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 22:32:31 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/30 23:07:07 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Allocates (with malloc()) and returns a new string, which is the result
		of the concatenation of ’s1’ and ’s2’.

	RETURN VALUE
		The new string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	total;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)ft_calloc((total), sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	ft_strlcat(result, s1, total);
	ft_strlcat(result, s2, total);
	return (result);
}
