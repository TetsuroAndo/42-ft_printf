/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:39:42 by teando            #+#    #+#             */
/*   Updated: 2024/11/09 01:03:04 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_handler(const char format, va_list ap)
{
	int	r;

	r = 0;
	if (format == 'c')
		r = type_putchar(va_arg(ap, int));
	else if (format == 's')
		r = type_putstr(va_arg(ap, char *));
	else if (format == 'p')
		r = type_putptr(va_arg(ap, uintptr_t), "0123456789abcdef");
	else if (format == 'd' || format == 'i')
		r = type_putbase(va_arg(ap, int), "0123456789");
	else if (format == 'u')
		r = type_putbase(va_arg(ap, unsigned int), "0123456789");
	else if (format == 'x')
		r = type_putbase(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		r = type_putbase(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		r = type_putchar('%');
	return (r);
}

static int	format_string(const char *format, va_list ap)
{
	int	r;
	int	cnt;

	r = 0;
	cnt = 0;
	while (*format)
	{
		if (*format == '%' && *(++format))
			r = format_handler(*format++, ap);
		else
			r = type_putchar(*format++);
		if (r == -1)
			return (-1);
		cnt += r;
	}
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		cnt;

	va_start(ap, format);
	cnt = format_string(format, ap);
	va_end(ap);
	return (cnt);
}
