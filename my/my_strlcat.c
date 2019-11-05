/*
** EPITECH PROJECT, 2019
** Strlcat
** File description:
** function that reproduce the behavior of strcat function
** but that start at rank n
*/

int my_strlen(char const *str);

char *my_strlcat(char *dest, char const *src, int n)
{
    char dest_length;
    int i = 0;

    dest_length = my_strlen(dest);
    for (;src[n] != '\0'; n++) {
        dest[dest_length + i] = src[n];
        i++;
    }
    dest[dest_length + i] = '\0';

    return (dest);
}