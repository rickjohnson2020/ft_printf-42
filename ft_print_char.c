/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <riyano@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:41:29 by riyano            #+#    #+#             */
/*   Updated: 2024/12/24 12:50:08 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./libft/libft.h"

int	ft_print_char(va_list *ap)
{
	char	c;

	c = (char)va_arg(*ap, int);
	ft_putchar_fd(c, 1);
	return (1);
}
//
//#include <stdio.h>
//static int call_ft_print_char(int dummy, ...)
//{
//    va_list args;
//    int     printed_chars;
//
//    va_start(args, dummy);
//    printed_chars = ft_print_char(args);
//    va_end(args);
//
//    return (printed_chars);
//}
//
//int main(void)
//{
//    int printed;
//
//    printf("=== Testing ft_print_char ===\n\n");
//
//    // Pass 0 as the dummy. Then 'A' goes into the variadic arguments.
//    printed = call_ft_print_char(0, 'A');
//    printf("\n[Expected output: A]\n[Printed chars: %d]\n", printed);
//
//    // Pass 0 as the dummy. '#' is in the variadic list.
//    printed = call_ft_print_char(0, '#');
//    printf("\n[Expected output: #]\n[Printed chars: %d]\n", printed);
//
//    // Same for 'z'.
//    printed = call_ft_print_char(0, 'z');
//    printf("\n[Expected output: z]\n[Printed chars: %d]\n", printed);
//
//    return 0;
//}
