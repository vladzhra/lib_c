/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-bsmyls-vlad.zaharia
** File description:
** my_put_nbr_base
*/

#include <unistd.h>
#include "my.h"

void my_put_nbr_base(int nb, int base)
{
    if (nb < 0) {
        my_put_nbr_base(-nb, base);
    } else {
        if (nb >= base)
            my_put_nbr_base(nb / base, base);
        my_putchar((nb % base) + 48);
    }
}
