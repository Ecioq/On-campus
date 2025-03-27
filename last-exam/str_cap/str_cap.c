/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:21:34 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/26 13:22:13 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1,str,1);
		str++;
	}
}
int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	while(argv[i] && argv[i][j] && i < argc)
	{
		//i++;
		j = 0;
		while(argv[i][j] == 32 || argv[i][j] == '\t')
			j++;
		if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			argv[i][j] -= 32;
		i++;
	}
	i = 1;
	j = 0;
	while(argv[i] && i < argc)
	{
		j = 0;
		//argv[i][j] -= 32;
		while(argv[i][j])
		{
			if (argv[i][j] == 32 || argv[i][j] == '\t')
			{
				while(argv[i][j] == 32 || argv[i][j] == '\t')
					j++;
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
				j++;
			}
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z' && j >= 1)
			{
				argv[i][j] += 32;
				j++;
			}
			else
				j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
			write(1,"\n", 1);
		i++;
	}
	return 0;
}





