/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:57:09 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/27 16:24:57 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	int j  = 0;
	int ascii[256] = {0};

	while(argv[1][i])
	{
		j = 0;
		while(argv[2][j])
		{
			if (argv[1][i] == argv[2][j] && ascii[(unsigned char) argv[1][i]] == 0)
			{
				write(1,&argv[1][i],1);
				ascii[(unsigned char) argv[1][i]] = 1;
				break;
			}
			j++;
		}
		i++;
	}
	write(1,"\n",1);
	return 0;
}


