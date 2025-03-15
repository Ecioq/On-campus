/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:22:37 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/14 08:30:36 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;
	i = 0;

	while(s1[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}
	int main(void)
	{
		char *test = "hoop";
		char *test2 = "Hoop";
		int n = '5';
		int nb = ft_strncmp(test, test2, n);

			printf("%d\n",(nb));
		return 0;
	}



