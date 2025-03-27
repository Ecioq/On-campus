/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:51:38 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/27 15:47:21 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	return(number * sign);
}
int main(void)
{
	char str[] = "+54537";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return 0;
}


		 
