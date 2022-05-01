/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char *src)
{
    int dest_length = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[dest_length + i] = src[i];
        i = i + 1;
    }
    dest[dest_length + i] = '\0';
    return dest;
}
