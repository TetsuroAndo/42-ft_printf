/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:32:29 by teando            #+#    #+#             */
/*   Updated: 2024/11/09 03:10:55 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	void *ptr1;
	void *ptr2;
	void *ptr3;
	int len;
	int num;
	char ch;
	char str[] = "Hello, World!";

	len = 0;
	ptr1 = (void *)0x12345678;
	ptr2 = (void *)0xabcdef;
	ptr3 = NULL;
	num = 42;
	ch = 'A';

	printf("====================================================\n");
	// 標準のprintfを使用してポインタを出力
	printf("Standard printf:\n");
	len = printf("Pointer 1: %p\n", ptr1);
	printf("Return value: %d\n", len);
	len = printf("Pointer 2: %p\n", ptr2);
	printf("Return value: %d\n", len);
	len = printf("Pointer 3: %p\n", ptr3);
	printf("Return value: %d\n", len);

	// 標準のprintfを使用して他のデータ型を出力
	len = printf("Integer: %d\n", num);
	printf("Return value: %d\n", len);
	len = printf("Character: %c\n", ch);
	printf("Return value: %d\n", len);
	len = printf("String: %s\n", str);
	printf("Return value: %d\n", len);

	printf("====================================================\n");
	// libftprintf.aのft_printfを使用してポインタを出力
	printf("libftprintf ft_printf:\n");
	len = ft_printf("Pointer 1: %p\n", ptr1);
	printf("Return value: %d\n", len);
	len = ft_printf("Pointer 2: %p\n", ptr2);
	printf("Return value: %d\n", len);
	len = ft_printf("Pointer 3: %p\n", ptr3);
	printf("Return value: %d\n", len);

	// libftprintf.aのft_printfを使用して他のデータ型を出力
	len = ft_printf("Integer: %d\n", num);
	printf("Return value: %d\n", len);
	len = ft_printf("Character: %c\n", ch);
	printf("Return value: %d\n", len);
	len = ft_printf("String: %s\n", str);
	printf("Return value: %d\n", len);
	printf("====================================================\n");
	ft_printf("\n*****************************************************************\n");
	ft_printf("  ■■   ■■  ■■■■  ■■   ■■  ■■■■  ■■■■■■      ■■  ■■       ■■  ■■\n");
	ft_printf("  ■■■ ■■■   ■■   ■■   ■■   ■■     ■■       ■■■  ■■       ■■ ■■\n");
	ft_printf("        ■              ■                     ■\n");
	ft_printf("  ■■ ■ ■■   ■■   ■■ ■ ■■   ■■     ■■      ■■■■  ■■       ■■■■\n");
	ft_printf("  ■■   ■■   ■■   ■■  ■■■   ■■     ■■     ■■■■■  ■■       ■■ ■■\n");
	ft_printf("  ■■   ■■   ■■   ■■   ■■   ■■     ■■    ■■  ■■  ■■       ■■  ■■\n");
	ft_printf("  ■■   ■■  ■■■■  ■■   ■■  ■■■■    ■■   ■■   ■■  ■■■■■■■  ■■   ■■\n");
	ft_printf("*************************************************** server.c ****\n");

	return (0);
}