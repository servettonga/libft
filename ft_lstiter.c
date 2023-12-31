/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:26:00 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/31 15:10:20 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Iterates the list ’lst’ and applies the function ’f’ to the content
		of each element.
	RETURN VALUE
		None
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
