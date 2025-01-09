/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:25:10 by sehosaf           #+#    #+#             */
/*   Updated: 2023/12/31 15:13:29 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Counts the number of elements in a list.
	RETURN VALUE
		Length of the list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
