/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:52:13 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/31 15:12:11 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Allocates (with malloc()) and returns a new element. The variable
		’content’ is initialized with the value of the parameter ’content’.
		The variable ’next’ is initialized to NULL.
	RETURN VALUE
		The new element.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
