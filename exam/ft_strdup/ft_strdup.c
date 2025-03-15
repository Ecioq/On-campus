/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 08:26:44 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/13 08:36:09 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src)
	{
	char	*dup;
	int	i;

	i = 0;
	while (src[i])
	i++;
	dup = (char *)malloc((i+1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
	}
	int main(void)
{
    char str[] = "Hello, world!";
    char *dup;

    dup = ft_strdup(str);
    if (dup == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Original string: %s\n", str);
    printf("Duplicated string: %s\n", dup);

    free(dup);

    return (0);
}

