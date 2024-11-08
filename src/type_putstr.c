/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:39:19 by teando            #+#    #+#             */
/*   Updated: 2024/11/08 23:23:14 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	type_putstr(char *str)
{
	int	i;
	int	result;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		result = type_putchar(str[i]);
		if (result == -1)
			return (-1);
		i++;
	}
	return (i);
}
