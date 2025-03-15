/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:28:21 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/15 15:50:06 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
	int main(int argc, char **argv)
{
if (argc != 2)
{
	write(1,"\n",1);
	return 0;

}
	char *str;
	int i = 0;
	str = argv[1];
	while(str[i])
		i++;
	i--;
	while(str[i] && str[i] != 32 && str[i] != '\t')
	{
			i--;
	}
i++;
	while(str[i] && str[i] != 32 && str[i] != '\t')
{
	write(1,&str[i],1);
	i++;
}
}

