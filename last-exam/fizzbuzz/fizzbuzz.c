/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:05:34 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/25 13:20:57 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void fizzbuzz(void)
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0)
            write(1, "fizz", 4);
        if (i % 5 == 0)
            write(1, "buzz", 4);
        if (i % 3 != 0 && i % 5 != 0)
            printf("%d", i);  // printf() voor integers

        write(1, "\n", 1); // Nieuwe regel na elke output
        i++;
    }
}

int main(void)
{
    fizzbuzz();
    return 0;
}

