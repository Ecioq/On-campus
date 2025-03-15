/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:40:19 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/15 18:50:12 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int* tab, unsigned int len)
{
	if (len == 0)
		return 0;

	int maxv = tab[0];
	unsigned int i = 1;
	while (i < len)
	{
		if (tab[i] > maxv)
			maxv = tab[i];
	i++;
	}
	return maxv;
}
int main (void)
	{
		int array[] = {3, 7, 9, 8, 4, 3};
		unsigned int len = sizeof(array) / sizeof(array[0]);
		printf("%d\n",max(array, len));
		return 0;
	}




