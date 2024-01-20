/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:06:05 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/28 12:07:52 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		If c is an lowercase letter, ft_toupper() returns its uppercase
		equivalent,	if an uppercase representation exists in the current
		locale.	Otherwise, it returns c.
	RETURN VALUE
		The value returned is that of the converted letter,
		or c if the conversion was not possible.
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
