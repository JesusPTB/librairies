/*
** EPITECH PROJECT, 2019
** my_str_strcat
** File description:
** [file description here]
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    char dest_length;
    int i;

    dest_length = my_strlen(dest);
    for (i = 0; src[i] != '\0'; i++)
        dest[dest_length + i] = src[i];
    dest[dest_length + i] = '\0';

    return (dest);
}