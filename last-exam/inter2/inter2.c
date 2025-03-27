/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:32:46 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/27 15:38:57 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{ 
	int i = 0;
	int j = 0;
	int ascii[256] = {0};
	while(argv[1][i])
	{
		j = 0;
		while(argv[1][i] && argv[2][j])
		{
			if(argv[1][i] == argv[2][j] && ascii[(unsigned char) argv[1][i]] == 0)
			{
				write(1,&argv[1][i],1);
				ascii[(unsigned char) argv[1][i]] = 1;
				break;
			}
			j++;
		}
		i++;
	}
}
