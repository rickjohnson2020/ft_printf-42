/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <riyano@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:16:39 by riyano            #+#    #+#             */
/*   Updated: 2024/12/24 13:31:00 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h>
#include <stdlib.h>

int	ft_print_decimal(va_list *ap)
{
	int		num;
	char	*num_str;
	int		printed;

	num = va_arg(*ap, int);
	num_str = ft_itoa(num);
	ft_putstr_fd(num_str, 1);
	printed = ft_strlen(num_str);
	free(num_str);
	return (printed);
}
//
//#include <stdio.h>
//static int call_ft_print_decimal(int dummy, ...)
//{
//    va_list args;
//    int     printed_chars;
//
//    va_start(args, dummy);
//    printed_chars = ft_print_decimal(args);
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
//    printed = call_ft_print_decimal(0, 10);
//    printf("\n[Expected output: A]\n[Printed chars: %d]\n", printed);
//
//    // Pass 0 as the dummy. '#' is in the variadic list.
//    printed = call_ft_print_decimal(0, 1000);
//    printf("\n[Expected output: #]\n[Printed chars: %d]\n", printed);
//
//    // Same for 'z'.
//    printed = call_ft_print_decimal(0, 0);
//    printf("\n[Expected output: z]\n[Printed chars: %d]\n", printed);
//
//    return 0;
//}
