/*
** EPITECH PROJECT, 2022
** B-PSU-200-PAR-2-1-tetris-henry.letellier
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int nb)
{
    int i = 0;

    while (i < nb && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
