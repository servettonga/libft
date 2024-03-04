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

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**free_all(char **result, int k)
{
	while (k > 0)
		free(result[--k]);
	free(result);
	return (NULL);
}

static char	**fill_words(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			result[k] = ft_substr(s, j, i - j);
			if (!result[k])
				return (free_all(result, k));
			k++;
		}
	}
	result[k] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	return (fill_words(result, s, c));
}
