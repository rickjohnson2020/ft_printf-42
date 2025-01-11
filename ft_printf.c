/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <riyano@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:40:26 by riyano            #+#    #+#             */
/*   Updated: 2024/12/23 12:40:26 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./libft/libft.h"
#include "./ft_printf.h"

static int	handle_conversion(char c, va_list ap)
{
	if (c == 'c')
		return (ft_print_char(ap));
	else if (c == 's')
		return (ft_print_str(ap));
	else if (c == 'd' || c == 'i')
		return (ft_print_decimal(ap));
	else if (c == 'p')
		return (ft_print_pointer(ap));
	else if (c == 'u')
		return (ft_print_unsigned(ap));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(ap, c));
	else if (c == '%')
	{
		ft_putchar_fd(c, 1);
		return (1);
	}
	else
	{
		ft_putchar_fd('%', 1);
		ft_putchar_fd(c, 1);
		return (2);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		printed_chars;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (*format == '\0')
		return (0);
	va_start(ap, format);
	printed_chars = 0;
	while (*format)
	{
		if (*format == '%')
			printed_chars += handle_conversion(*++format, ap);
		else
		{
			ft_putchar_fd(*format, 1);
			printed_chars++;
		}
		format++;
	}
	va_end(ap);
	return (printed_chars);
}
//
//#include <stdio.h>
//int	main()
//{
//	char	*p;
//	int		i;
//	char	*str = NULL;
//
//	ft_printf("%u\n", -1);
//	printf("%u\n", -1);
//	ft_printf("%p\n", p);
//	printf("%p\n", p);
//	ft_printf("%p\n", &i);
//	printf("%p\n", &i);
//	ft_printf("%x\n", 255);
//	printf("%x\n", 255);
//	ft_printf("%X\n", 255);
//	printf("%X\n", 255);
//	ft_printf("%%\n", &i);
//	printf("%%\n", &i);
//	ft_printf("%kkk\n", &i);
//	printf("%kkk\n", &i);
//	ft_printf("kkk\n", &i);
//	printf("kkk\n", &i);
//	ft_printf("kk%%kkk\n", &i);
//	printf("kk%%kkk\n", &i);
//	ft_printf("kkk%pkkkk\n", &i);
//	printf("kkk%pkkkk\n", &i);
//	ft_printf("%d\n", ft_printf("%"));
//	printf("%d\n", printf("%"));
//	ft_printf("%d\n", ft_printf("\0"));
//	printf("%d\n", printf("\0"));
//	ft_printf("%d\n", ft_printf('\0'));
//	printf("%d\n", printf('\0'));
//	ft_printf("Hello\n");
//	printf("Hello\n");
//	ft_printf("%s\n", str);
//	printf("%s\n", str);
//	return 0;
//}
