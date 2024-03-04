/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:53:21 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/28 11:54:01 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Checks whether c is a 7-bit unsigned char value that fits into
		the ASCII character set.
	RETURN VALUE
		The values returned are nonzero if the character c falls into
		the tested class, and zero if not.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
