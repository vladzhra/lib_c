/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-tetris-henry.letellier
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
        dest[i] = src[i++];
    dest[i] = '\0';
    return dest;
}
