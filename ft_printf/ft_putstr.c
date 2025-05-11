/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:15:10 by side-boe          #+#    #+#             */
/*   Updated: 2025/04/23 14:24:51 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		count = 6;
		return (count);
	}
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
/*int main(void)
{
	char *jo = "hopelijk";
	ft_putstr(jo);
	return 0;
*/
