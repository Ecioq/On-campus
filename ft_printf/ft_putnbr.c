/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:20:20 by side-boe          #+#    #+#             */
/*   Updated: 2025/04/23 14:27:42 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb);

static void	ft_putchar_nbr(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		ft_putchar_nbr('-');
		ft_putchar_nbr('2');
		count += 2;
		count += ft_putnbr(147483648);
		return (count);
	}
	if (nb < 0)
	{
		ft_putchar_nbr('-');
		count++;
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	ft_putchar_nbr((nb % 10) + '0');
	count++;
	return (count);
}
/*
int main(void)
{
	int nb = 2147483647;
	ft_putnbr(nb);
	return 0;
}
*/
