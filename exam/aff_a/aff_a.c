/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 07:36:30 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/14 08:34:38 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main( int argc, char **argv)
{
	int	i;
	i = 1;
	if (argc < 1)
	{
		write(1,"a\n",2);
		return 0;
	}
	if (argc > 1)
	{
		while(i < argc)
		{
			while(*argv[i])
			{
				if (*argv[i] == 'a')
				{
					write(1,"a\n",2);
					return 0;
				}
				argv[i]++;
			}
		i++;
	}
	}
		write(1,"a\n",2);
		return 0;
}
	



