/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:42:35 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/27 13:51:11 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int i = 0;
	int size;
	char *dup;
	while(src[i])
		i++;
	size = i;
	i = 0;
	dup = (char *)malloc(sizeof (char) * size + 1);
	if(dup == NULL)
		return NULL;
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}
int main(void)
{
	char src[] = "werkt dit nu";
	char *dup;
	dup = ft_strdup(src);
	printf("%s\n",dup);
	return 0;
}


