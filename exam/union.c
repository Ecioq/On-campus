/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:41:24 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/15 15:28:01 by side-boe         ###   ########.fr       */
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
	int	ascii[256] = {0};
	char	*str1 = argv[1];
	char	*str2 = argv[2];

	while(*str1)
	{
		if (ascii [(unsigned char) *str1] == 0)
		  {
		  write(1,str1,1);
		(ascii[(unsigned char) *str1]) =1;
		  }
	str1++;
	}
        while(*str2)
        {
                if (ascii [(unsigned char) *str2] == 0)
                  {
                  write(1,str2,1);
                (ascii[(unsigned char) *str2]) =1;
                  }
        str2++;
        }
	write(1,"\n",1);
		return 0;
}

if (ascii [(unsigned char) *str1] == 0)
