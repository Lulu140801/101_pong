/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** write a number
*/

#include "my.h"

void my_put_nbr(int n)
{
    if (n < 0)
    {
        my_putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    }
    else
        my_putchar(n + '0');
}