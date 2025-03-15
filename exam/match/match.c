/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:58:21 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/15 19:25:29 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	int i =  0;
	int ascii[256] = {0};

	char *str1 = argv[1];
	char *str2 = argv[2];

	while(str2[i])
	{
		if(ascii[(unsigned char) str2[i]] == 0)
		ascii[(unsigned char) str2[i]] = 1;
	i++;
	}
	i = 0;
	while(str1[i])
		{
			if (ascii[(unsigned char) str1[i]] == 1)
				write(1,&str1[i],1);
		i++;
		}
	write(1,"\n",1);
	return 0;
}

