/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 07:44:44 by side-boe          #+#    #+#             */
/*   Updated: 2025/04/23 14:28:37 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(int nb);
int	ft_unsigint(unsigned int nb);
int	ft_printf(const char *format, ...);
int	parser(char format, va_list ap);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_base(unsigned long n, char *base);
int	ft_putvoid(void *ptr);
int	ft_puthex(unsigned int n, char format);
#endif
