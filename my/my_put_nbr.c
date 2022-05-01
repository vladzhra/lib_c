/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    int start;
    int end;

    if (nb < 0) {
        my_put_nbr(-nb);
    } else {
        end = nb % 10;
        start = nb / 10;
        if (start != 0)
            my_put_nbr(start);
        my_putchar(end + '0');
    }
    return (end);
}
