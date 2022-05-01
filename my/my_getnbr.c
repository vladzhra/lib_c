/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** descrip
*/

#include <stdio.h>

int my_getnbr(char *str)
{
    int res = 0;
    int sign = 1;

    while (*str == '+' || *str == '-') {
        if (*str == '-')
            sign *= -1;
        str += 1;
    }
    while (*str != '\0' && *str >= '0' && *str <= '9') {
        if (res > __INT_MAX__ || \
            (res == __INT_MAX__ && *str > 8 && sign == -1))
            return 0;
        if (res == __INT_MAX__ && *str > 7 && sign == 1)
            return 0;
        res = res * 10 + *str - 48;
        str = str + 1;
    }
    if (sign == -1)
        res *= -1;
    return res;
}
