/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:48:08 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/31 00:04:02 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Allocates (with malloc(3)) and returns an array of strings obtained by
		splitting ’s’ using the character ’c’ as a delimiter. The array must be
		ended by a NULL pointer.

	RETURN VALUE
		The array of new strings resulting from the split.
		NULL if the allocation fails.
*/

#include "libft.h"

static int	ft_count_chars(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	result = (char **)ft_calloc((ft_count_chars(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			result[k++] = ft_substr(s, j, i - j);
		}
	}
	result[k] = NULL;
	return (result);
}
