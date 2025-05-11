/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 07:43:54 by side-boe          #+#    #+#             */
/*   Updated: 2025/04/23 14:26:23 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigint(unsigned int nb);

static void	ft_putchar_nbr(char c)
{
	write(1, &c, 1);
}

int	ft_unsigint(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_unsigint(nb / 10);
	ft_putchar_nbr((nb % 10) + '0');
	count++;
	return (count);
}
