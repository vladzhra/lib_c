/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include <unistd.h>
int my_strlen(char *str);

void my_putstr(char const *str)
{
    write(1, str, my_strlen((char *)str));
}
