/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyano <yanori915@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:05:07 by riyano            #+#    #+#             */
/*   Updated: 2024/07/11 12:06:01 by riyano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

static void	convert_to_base(unsigned long n, char *base, int b_len, int *count)
{
	int		i;
	char	result[65];

	i = 0;
	if (n == 0)
		result[i++] = base[0];
	else
	{
		while (n > 0)
		{
			result[i++] = base[n % b_len];
			n /= b_len;
		}
	}
	while (i > 0)
	{
		ft_putchar_fd(result[--i], 1);
		(*count)++;
	}
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	base_len;
	int	count;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	count = 0;
	convert_to_base(nbr, base, base_len, &count);
	return (count);
}
