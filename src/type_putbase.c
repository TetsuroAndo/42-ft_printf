/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_putbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:32:43 by teando            #+#    #+#             */
/*   Updated: 2024/11/09 00:09:28 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	type_putbase(long nbr, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		len = type_putchar('-');
		nbr = -nbr;
	}
	if (nbr < base_len)
		len += type_putchar(base[nbr]);
	else
	{
		len += type_putbase(nbr / base_len, base);
		len += type_putbase(nbr % base_len, base);
	}
	return (len);
}
