/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** compil a project
*/

#include <stdio.h>
#include "../lib/my.h"

int main(int ac, char **av)
{
    int result = 0;

    if (ac == 8)
        pong(av);
    else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        result = 1;
    else
        return (84);
    if (result == 1){
        printf("USAGE \n    ./101pong x0 y0 z0 x1 y1 z1 n \n\nDESCRIPTION \n");
        printf("    x0 ball abscissa at time t - 1 \n");
        printf("    y0 ball ordinate at time t - 1 \n");
        printf("    z0 ball altitude at time t - 1 \n");
        printf("    x1 ball abscissa at time t y1 ball ordinate at time t \n");
        printf("    z1 ball altitude at time t n time shift");
        printf(" (greater than or equal to zero, integer)");
    }
    return (0);
} 