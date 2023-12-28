/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:31:37 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/28 10:57:06 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Allocates (with malloc(3)) and returns a string representing the integer
		received as an argument. Negative numbers must be handled.
	RETURN VALUE
		The string representing the integer.  NULL if the allocation fails.
*/

#include "libft.h"

static size_t	ft_int_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_int_to_str(long n, int sign, size_t	len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	while (len)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (sign)
		str[0] = '-';
	else
		str[0] = (n % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = n;
	len = ft_int_len(num);
	if (num < 0)
		str = ft_int_to_str(-num, 1, len);
	else
		str = ft_int_to_str(num, 0, len);
	return (str);
}
