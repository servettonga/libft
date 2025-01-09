/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 00:04:24 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:41:56 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Applies the function ’f’ to each character of the string ’s’ to create a
		new string (with malloc()) resulting from successive applications of ’f’.

	RETURN VALUE
		The string created from the successive applications of ’f’.
		Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	if (!s || !f)
		return (NULL);
	new_str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!(new_str))
		return (NULL);
	i = -1;
	while (s[++i])
		new_str[i] = f(i, s[i]);
	new_str[i] = '\0';
	return (new_str);
}
