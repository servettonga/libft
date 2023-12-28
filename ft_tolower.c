/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:59:46 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/28 12:04:04 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		If c is an uppercase letter, ft_tolower() returns its lowercase
		equivalent,	if a lowercase representation exists in the current
		locale.	Otherwise, it returns c.
	RETURN VALUE
		The value returned is that of the converted letter,
		or c if the conversion was not possible.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
