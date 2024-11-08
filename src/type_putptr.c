/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_putptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:33:45 by teando            #+#    #+#             */
/*   Updated: 2024/11/08 23:27:39 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_putptr(uintptr_t nbr, char *base)
{
	int			len;
	uintptr_t	base_len;

	if (!nbr)
		return (type_putstr("(nil)"));
	len = type_putstr("0x");
	base_len = ft_strlen(base);
	if (nbr < base_len)
		len += type_putchar(base[nbr]);
	else
	{
		len += type_putbase(nbr / base_len, base);
		len += type_putbase(nbr % base_len, base);
	}
	return (len);
}
