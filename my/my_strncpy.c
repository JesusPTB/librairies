/*
** EPITECH PROJECT, 2019
** My_strncpy
** File description:
** [file description here]
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    if (n > my_strlen(src))
        dest[i] = '\0';
    return (dest);
}