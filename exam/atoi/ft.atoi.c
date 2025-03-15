/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:33:39 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/13 14:45:26 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str)
{
	int number;
	int even;

	while((*str <= 9 && *str <= 13) || (*str == ' '))
		str++;
	while((*str == '+') || (*str == '-'))
	{
		if(*str == '-')
			even++;
			str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if(!(even % 2))
			return(number);
	return (-number);
			}
int main(void)
{
	char *test = "  ---+--+1234abc566";
	printf("de integer is: %d\n",ft_atoi(test));
	return 0;
}
