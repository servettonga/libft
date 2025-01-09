/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:46:00 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/28 12:04:18 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Checks  for  an  alphabetic character; in the standard "C" locale,
		it is equivalent to (ft_isupper(c) || ft_islower(c)).
	RETURN VALUE
		The values returned are nonzero if the character c falls into
		the tested class, and zero if not.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
