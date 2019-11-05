/*
** EPITECH PROJECT, 2019
** my_str_strncat
** File description:
** [file description here]
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int n)
{
    char dest_length;
    int i;

    dest_length = my_strlen(dest);
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_length + i] = src[i];
    dest[dest_length + i] = '\0';

    return (dest);
}