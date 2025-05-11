/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:28:41 by side-boe          #+#    #+#             */
/*   Updated: 2025/04/25 15:34:12 by side-boe         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */
#include <stdarg.h>
#include "ft_printf.h"

int	ft_putnbr(int nb);
int	parser(char format, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	if (!format)
		return ('\0');
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			count += parser(format[i + 1], ap);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

int	parser(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		count += ft_unsigint(va_arg(ap, unsigned int));
	else if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == 'p')
		count += ft_putvoid(va_arg(ap, void *));
	else if (format == 'x')
		count += ft_puthex(va_arg(ap, unsigned int), format);
	else if (format == 'X')
		count += ft_puthex(va_arg(ap, unsigned int), format);
	else if (format == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar('%');
	return (count);
}
