/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <riyano@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 12:41:28 by riyano            #+#    #+#             */
/*   Updated: 2024/12/24 12:49:54 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h>

int	ft_print_str(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
//
//#include <stdio.h>
//static int call_ft_print_str(int dummy, ...)
//{
//    va_list args;
//    int     printed_chars;
//
//    va_start(args, dummy);
//    printed_chars = ft_print_str(args);
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
//    printed = call_ft_print_str(0, "Hello");
//    printf("\n[Expected output: A]\n[Printed chars: %d]\n", printed);
//
//    // Pass 0 as the dummy. '#' is in the variadic list.
//    printed = call_ft_print_str(0, "World");
//    printf("\n[Expected output: #]\n[Printed chars: %d]\n", printed);
//
//    // Same for 'z'.
//    printed = call_ft_print_str(0, NULL);
//    printf("\n[Expected output: z]\n[Printed chars: %d]\n", printed);
//
//    return 0;
//}
