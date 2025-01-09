/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:25:19 by sehosaf           #+#    #+#             */
/*   Updated: 2025/01/09 23:04:27 by sehosaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
       The ft_atoi() function converts the initial portion of the string
	   pointed to by ptr to int.
	RETURN VALUE
       The converted value or 0 on error.
*/

int	ft_atoi(const char *str)
{
	int	sign;
	int	output;

	sign = 1;
	output = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		sign = 44 - *str++;
	while (*str >= '0' && *str <= '9')
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output * sign);
}
