/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:48:08 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/10 00:25:31 by sehosaf          ###   ########.fr       */
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
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	**free_all(char **arr, int size)
{
	while (size--)
		free(arr[size]);
	free(arr);
	return (NULL);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**split_words(char const *s, char c, int words)
{
	char	**result;
	int		i;
	size_t	len;

	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = word_len(s, c);
			result[i] = ft_substr(s, 0, len);
			if (!result[i])
				return (free_all(result, i));
			s += len;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (split_words(s, c, count_words(s, c)));
}
