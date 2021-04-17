/*
** EPITECH PROJECT, 2020
** 101pong
** File description:
** function_principale
*/

#include <stdio.h>
#include "../lib/my.h"
#include <math.h>

float zulu(char **av)
{
    float nb = 0;
    float result = 0;
    float zero = my_getnbr(av[1]);
    float un = my_getnbr(av[4]);
    float n = my_getnbr(av[7]);

    nb = un - zero;
    printf("The velocity vector of the ball is:\n(%.2f", nb);
    result = nb * n;
    result = result + un;
    return (result);
}

float yankee(char **av)
{
    float nb = 0;
    float result = 0;
    float zero = my_getnbr(av[2]);
    float un = my_getnbr(av[5]);
    float n = my_getnbr(av[7]);

    nb = un - zero;
    printf(", %.2f", nb);
    result = nb * n;
    result = result + un;
    return (result);
}

float xray(char **av)
{
    float nb = 0;
    float result = 0;
    float zero = my_getnbr(av[3]);
    float un = my_getnbr(av[6]);
    float n = my_getnbr(av[7]);

    nb = un - zero;
    printf(", %.2f)\n", nb);
    result = nb * n;
    result = result + un;
    return (result);
}

void degres(char **av)
{
    float x0 = my_getnbr(av[1]);
    float y0 = my_getnbr(av[2]);
    float z0 = my_getnbr(av[3]);
    float x1 = my_getnbr(av[4]);
    float y1 = my_getnbr(av[5]);
    float z1 = my_getnbr(av[6]);
    float result = z1 - z0;
    float result1 = ((x1 - x0) * (x1 - x0));
    float result2 = ((y1 - y0) * (y1 - y0));
    float result3 = ((z1 - z0) * (z1 - z0));
    
    x0 = sqrtf(result1 + result2 + result3);
    x0 = result / x0;
    x0 = acosf(x0);
    x0 = (x0 * 180) /  3.14159265359;
    x0 = 90 - (180 - x0);
    if (x0 > 90)
        printf("The ball won’t reach the paddle.");
    else
        printf("\nThe incidence angle is:\n%.2f degrees\n", x0);
}

int pong(char **av)
{
    float nb_1 = 0;
    float nb_2 = 0;
    float nb_3 = 0;

    nb_1 = zulu(av);
    nb_2 = yankee(av);
    nb_3 = xray(av);
    printf("At time t + %s, ball coordinates will be:\n", av[7]);
    printf("(%.2f, %.2f, %.2f)", nb_1, nb_2, nb_3);
    degres(av);
    return (0);
}
