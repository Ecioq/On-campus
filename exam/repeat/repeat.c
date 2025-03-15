/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 07:41:58 by side-boe          #+#    #+#             */
/*   Updated: 2025/03/14 07:42:56 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void repeat_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i]) // Loop door de string
    {
        if (str[i] == 'a' || str[i] == 'A') printf("a");
        else if (str[i] == 'b' || str[i] == 'B') printf("bb");
        else if (str[i] == 'c' || str[i] == 'C') printf("ccc");
        else if (str[i] == 'd' || str[i] == 'D') printf("dddd");
        else if (str[i] == 'e' || str[i] == 'E') printf("eeeee");
        else if (str[i] == 'f' || str[i] == 'F') printf("ffffff");
        else if (str[i] == 'g' || str[i] == 'G') printf("ggggggg");
        else if (str[i] == 'h' || str[i] == 'H') printf("hhhhhhhh");
        else if (str[i] == 'i' || str[i] == 'I') printf("iiiiiiiii");
        else if (str[i] == 'j' || str[i] == 'J') printf("jjjjjjjjjj");
        else if (str[i] == 'k' || str[i] == 'K') printf("kkkkkkkkkkk");
        else if (str[i] == 'l' || str[i] == 'L') printf("llllllllllll");
        else if (str[i] == 'm' || str[i] == 'M') printf("mmmmmmmmmmmmm");
        else if (str[i] == 'n' || str[i] == 'N') printf("nnnnnnnnnnnnnn");
        else if (str[i] == 'o' || str[i] == 'O') printf("ooooooooooooooo");
        else if (str[i] == 'p' || str[i] == 'P') printf("pppppppppppppppp");
        else if (str[i] == 'q' || str[i] == 'Q') printf("qqqqqqqqqqqqqqqqq");
        else if (str[i] == 'r' || str[i] == 'R') printf("rrrrrrrrrrrrrrrrrr");
        else if (str[i] == 's' || str[i] == 'S') printf("sssssssssssssssssss");
        else if (str[i] == 't' || str[i] == 'T') printf("tttttttttttttttttttt");
        else if (str[i] == 'u' || str[i] == 'U') printf("uuuuuuuuuuuuuuuuuuuuu");
        else if (str[i] == 'v' || str[i] == 'V') printf("vvvvvvvvvvvvvvvvvvvvvv");
        else if (str[i] == 'w' || str[i] == 'W') printf("wwwwwwwwwwwwwwwwwwwwwww");
        else if (str[i] == 'x' || str[i] == 'X') printf("xxxxxxxxxxxxxxxxxxxxxxxx");
        else if (str[i] == 'y' || str[i] == 'Y') printf("yyyyyyyyyyyyyyyyyyyyyyyyy");
        else if (str[i] == 'z' || str[i] == 'Z') printf("zzzzzzzzzzzzzzzzzzzzzzzzzz");
            printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    char str[] = "test deze is";
    repeat_alpha(str);
    return (0);
}
