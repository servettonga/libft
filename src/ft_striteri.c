/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:29:31 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/10 00:17:54 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
		The function ft_striteri applies the given function f to each
		character in the given string s.

	RETURN VALUE :
		None.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
