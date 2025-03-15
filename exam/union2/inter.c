/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:58:34 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/15 17:28:13 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int ascii[256] = {0};
	char *str1 = argv[1];
	char *str2 = argv[2];

	while(*str)
	{
		if (ascii [(unsigned char) *str1] == 0)
		{
			str1++;
			ascii[(unsigned char *str1)] = 1;
