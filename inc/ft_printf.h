/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:28:51 by teando            #+#    #+#             */
/*   Updated: 2024/11/09 00:31:51 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_putchar(int c);

int	ft_printf(const char *format, ...);
int	type_putbase(long nbr, char *base);
int	type_putchar(int c);
int	type_putptr(uintptr_t nbr, char *base);
int	type_putstr(char *str);

#endif