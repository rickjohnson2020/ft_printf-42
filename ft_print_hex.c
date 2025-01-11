/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <riyano@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:31:00 by riyano            #+#    #+#             */
/*   Updated: 2024/12/27 14:39:19 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./ft_printf.h"

int	ft_print_hex(va_list ap, char specifier)
{
	unsigned int	num;
	char			*base;
	int				printed;

	num = va_arg(ap, unsigned int);
	if (specifier == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	printed = ft_putnbr_base(num, base);
	return (printed);
}
//
//#include <stdio.h>
//static int call_ft_print_str(int dummy, ...)
//{
//    va_list args;
//    int     printed_chars;
//
//    va_start(args, dummy);
//    printed_chars = ft_print_hex(args, 'x');
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
//    printed = call_ft_print_str(0, 0);
//    printf("\n[Expected output: A]\n[Printed chars: %d]\n", printed);
//
//    // Pass 0 as the dummy. '#' is in the variadic list.
//    printed = call_ft_print_str(0, 1000);
//    printf("\n[Expected output: #]\n[Printed chars: %d]\n", printed);
//
//    // Same for 'z'.
//    printed = call_ft_print_str(0, -1);
//    printf("\n[Expected output: z]\n[Printed chars: %d]\n", printed);
//
//    return 0;
//}
