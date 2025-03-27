/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:18:33 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/26 18:34:30 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void zetmaneer(char *str)
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
	while(argv[i])
	{
		while(argv[i][j] == 32)
			j++;
		i++;
	}
	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] += 32;
			if(argv[i][j+1] == '\0')
				argv[i][j] -= 32;
			if (argv[i][j] == 32)
			{
				argv[i][j - 1] -= 32;
					while (argv[i][j] == 32)
						j++;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		zetmaneer(argv[i]);
		write(1,"\n",1);
		i++;
	}
	return 0;
}
