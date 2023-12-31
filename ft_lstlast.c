/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:25:18 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/31 15:11:12 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Returns the last element of the list.
	RETURN VALUE
		Last element of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
