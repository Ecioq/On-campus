/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:37:56 by side-boe          #+#    #+#             */
/*   Updated: 2025/04/23 14:25:53 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int	count;
	int	base_len;

	count = 0;
	base_len = 16;
	if (n >= base_len)
		count += ft_putnbr_base(n / base_len, base);
	count += ft_putchar(base[n % base_len]);
	return (count);
}

int	ft_putvoid(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	return (count);
}
