/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:31:37 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/10 00:17:36 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Allocates with ft_calloc() and returns a string representing the
		integer	received as an argument. Negative numbers must be handled.
	RETURN VALUE
		The string representing the integer. NULL if the allocation fails.
*/

#include "libft.h"

static size_t	ft_int_len(long n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_int_to_str(char *str, long n, size_t len)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_int_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_int_to_str(str, (long)n, len);
	return (str);
}
