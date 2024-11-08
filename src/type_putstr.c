/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:39:19 by teando            #+#    #+#             */
/*   Updated: 2024/11/09 01:04:49 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	type_putstr(char *str)
{
	int	i;
	int	r;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		r = type_putchar(str[i]);
		if (r == -1)
			return (-1);
		i++;
	}
	return (i);
}
