/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:28:51 by teando            #+#    #+#             */
/*   Updated: 2024/11/08 23:21:24 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

// ft_libft
int	ft_putchar(int c);

// ft_printf
int	ft_printf(const char *format, ...);

// type_putbase
int	type_putbase(long nbr, char *base);

// type_putchar
int	type_putchar(int c);

// type_putptr
int	type_putptr(uintptr_t nbr, char *base);

// type_putstr
int	type_putstr(char *str);

#endif