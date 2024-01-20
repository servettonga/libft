/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:25:40 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/31 15:08:51 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Adds the element ’new’ at the beginning of the list.
	RETURN VALUE
		None
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
