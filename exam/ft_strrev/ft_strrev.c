/* **************0************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:04:38 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/14 08:43:41 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	char	*start;
	char	*end;
	char 	temp;

	start = str;
	end = str;
	while(*end)
	{
		end++;
	}
	end--;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return str;
}
int main(void)
{
	char str[] = "hoed";
	ft_strrev(str);
	printf( "%s\n", str);
		return 0;
}
		
		



