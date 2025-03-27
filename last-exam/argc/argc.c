/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:43:31 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/27 11:47:01 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	(void) argv;
	//write(1, &argc, 1);
	int n = argc - 1;
	ft_putchar(n % 10 +'0');
	ft_putchar('\n');

}
