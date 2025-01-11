/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <riyano@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:04:26 by riyano            #+#    #+#             */
/*   Updated: 2024/12/27 20:11:23 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putnbr_base(unsigned long nbr, char *base);
char	*ft_utoa(unsigned int n);
int		ft_print_char(va_list ap);
int		ft_print_decimal(va_list ap);
int		ft_print_hex(va_list ap, char specifier);
int		ft_print_pointer(va_list ap);
int		ft_print_str(va_list ap);
int		ft_print_unsigned(va_list ap);

#endif
