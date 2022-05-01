/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        if (s1[i + 1] == '\0' && s2[i + 1] != '\0')
            return (s1[i + 1] - s2[i + 1]);
        if (s2[i + 1] == '\0' && s1[i + 1] != '\0')
            return (s1[i + 1] - s2[i + 1]);
    }
    return 0;
}
