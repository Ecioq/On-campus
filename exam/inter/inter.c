/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:10:40 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/15 18:31:38 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	char *str1 = argv[1];
	char *str2 = argv[2];
	int ascii[256] = {0};

	int i = 0;
	int j = 0;

	while(str1[i])
	{
		j = 0;
		while(str2[j])
		{
			if(str1[i] == str2[j] && ascii[(unsigned char) str1[i]] == 0)
			{
				write(1,&str1[i],1);
				ascii[(unsigned char) str1[i]] = 1;
				break;
			}
			j++;
		}
		i++;
	}
	write(1,"\n",1);
		return 0;
}
