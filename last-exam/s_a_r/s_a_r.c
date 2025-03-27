/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_a_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:55:03 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/25 13:04:01 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void zetneer(char *nu)
{
	while(*nu)
	{
		write(1,nu,1);
		nu++;
	}
}
int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(argv[2][j]) 
		j++;
	while(argv[3][k])
		k++;
	if (argc != 4 || j != 1 || k != 1) // new line afgerond
	{
		write(1,"\n",1);
		return 0;
	}
	while(argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		i++;
	}
	zetneer(argv[1]);
	write(1,"\n",1);
	return 0;
}
