/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:54:32 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/14 09:14:38 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int 	x;
	i = 0;
	x = 0;
	while(dest[i])
		i++;
	while(src[x])
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void)
{
	char dest[20] = "hoop";
	char *src = "test";

	ft_strcat(dest,src);
	printf("%s\n",(dest));
			return 0;
			}
