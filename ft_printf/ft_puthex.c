/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:27:14 by side-boe          #+#    #+#             */
/*   Updated: 2025/04/23 14:24:24 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(unsigned int n, char format)
{
	int		count;
	int		base_len;
	char	*base;

	count = 0;
	base_len = 16;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= (unsigned long) base_len)
		count += ft_puthex(n / 16, format);
	count += ft_putchar(base[n % 16]);
	return (count);
}
