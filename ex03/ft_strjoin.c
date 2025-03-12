/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:39:31 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/12 11:00:24 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen(char *str)
{
	int	len;
	len = 0;
	while(str[len])
		len++;
	return (len);
}
char    *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	total_len;
	int	sep_len;
	char	*join_str;

	i = 0;
	k = 0;
	if (size <= 0)
		return (join_str =malloc(0));

	sep_len = ft_strlen(sep);
	total_len = 0;

	while(i < size) //size aantal strings in de array
	{
		total_len += ft_strlen(strs[i]);// berekent de lengte van elke strings door er door te itireren met i
		if (i < size -1) // voor de laatste meot er geem seperatie teken geteld worden
			total_len += sep_len; //seperatie tekens lengte
		i++;
	}
	join_str = (char *)malloc(sizeof(char) * (total_len +1));
	if (!join_str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j]) // i verwijst naar de string j naar de karakter
			join_str[k++] = strs[i][j++];// k verhoogt het karakter in de nieuwe joined string
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				join_str[k++] = sep[j++];
		}
		i++;
	}
	join_str[k] = '\0';
	return (join_str);
}
/*
#include <stdio.h>

int main() {
    char *strs[] = {"Hello", "world", "from", "C"};
    char *sep = " ";
    char *result = ft_strjoin(4, strs, sep);

    if (result) {
        printf("%s\n", result);  // Output: "Hello world from C"
        free(result);
    } else {
        printf("Memory allocation failed or size is invalid.\n");
    }

    return 0;
}*/
