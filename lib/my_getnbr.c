/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** change a string in int
*/

int calc2(int i, char const *str)
{
    if (str[0] == '-') {
        i++;
        return (i);
    } else
        return (i);
}

float calc(float nb, float nb2, int temp, char const *str)
{
    for (int i = 0, mult = 10; str[i] != '\0'; i++) {
        i = calc2(i, str);
        if (str[i] == '.') {
            nb = nb / 10;
            temp = 1;
            i++;
        }
        if (temp == 1) {
            nb2 = str[i] - 48;
            nb2 = nb2 / mult;
            nb = nb + nb2;
            mult = mult * 10;
        } else {
            nb = nb + str[i] - 48;
            nb = nb * 10;
        }
    }
    if (temp == 0)
        nb = nb / 10;
    return (nb);
}

float my_getnbr(char const *str)
{
    float nb = 0;
    float nb2 = 0;
    int temp = 0;

    nb = calc(nb, nb2, temp, str);
    if (str[0] == '-')
        nb = nb * (-1);
    return (nb);
}