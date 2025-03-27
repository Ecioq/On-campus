/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:42:41 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/26 17:59:54 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int size = 0;
	int i = 0;
	int *range = 0;
	int j = 0;
	size = end - start;
	if (end < start)
	{
	size = start - end;
	range = (int*)malloc(sizeof(int) * size + 1);
        if (range == NULL)
                return NULL;
	i = size - 1;
        while(size > j)
        {
                range[j] = start - i;
		j++;
                i--;
        }
        return range;
}
	if (end > start)
	{
	range = (int*)malloc(sizeof(int) * size + 1);
	if (range == NULL)
		return NULL;
	while(size >= i)
	{
		range[i] = start + i;
		i++;
	}
	return range;
}
}

int main(void)
{
	int i;
	int min;
	int max;
	int *range;

	min = 16;
	max = 3;
	range = ft_range(min, max);
	if (min - max > 0)
        {
        if (range)
        {
                i = min - (max + 1);
                while (i > 0)
                {
                        printf("%d\n", range[i]);
                        i--;
                }
        }
	}

	if (max - min > 0)
	{
	if (range)
	{
		i = 0;
		while (i < (max - min))
		{
			printf("%d\n", range[i]);
			i++;
		}
	}
		free(range);
	}
	return (0);
}
	
