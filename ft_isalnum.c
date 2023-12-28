/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:41:30 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/28 12:04:29 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Checks for an alphanumeric character;
		it is equivalent to (ft_isalpha(c) || ft_isdigit(c)).
	RETURN VALUE
		The values returned are nonzero if the character c falls into
		the tested class, and zero if not.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
