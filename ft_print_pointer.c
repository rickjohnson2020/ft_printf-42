/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <riyano@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:48:11 by riyano            #+#    #+#             */
/*   Updated: 2024/12/27 20:57:43 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "./libft/libft.h"
#include "./ft_printf.h"

int	ft_print_pointer(va_list ap)
{
	unsigned long	num;
	int				printed;

	num = (unsigned long)va_arg(ap, void *);
	if (num == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	printed = 0;
	printed += write(1, "0x", 2);
	printed += ft_putnbr_base(num, "0123456789abcdef");
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
//    printed_chars = ft_print_pointer(args);
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
//	void *p;
//	int i;
//    // Pass 0 as the dummy. Then 'A' goes into the variadic arguments.
//    printed = call_ft_print_str(0, p);
//    printf("\n[Expected output: A]\n[Printed chars: %d]\n", printed);
//
//    // Pass 0 as the dummy. '#' is in the variadic list.
//    printed = call_ft_print_str(0, &i);
//    printf("\n[Expected output: #]\n[Printed chars: %d]\n", printed);
//
//    // Same for 'z'.
//    printed = call_ft_print_str(0, NULL);
//    printf("\n[Expected output: z]\n[Printed chars: %d]\n", printed);
//
//    return 0;
//}
