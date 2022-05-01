/*
** EPITECH PROJECT, 2022
** B-PSU-200-PAR-2-1-mysokoban-vlad.zaharia
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *result;
    int i = 0;

    result = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i]) {
        result[i] = src[i];
        i++;
    }
    result[i] = 0;
    return (result);
}
