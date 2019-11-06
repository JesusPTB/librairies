/*
** EPITECH PROJECT, 2019
** Unsign
** File description:
** Function that unsign a number in a string
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strlcat(char *dest, char const *src, int n);

char *my_strcat(char *dest, char const *src);

char *my_unsign(char *str)
{
    char *nb = malloc(sizeof(my_strlen(str)));

    if (str[0] == '-' || str[0] == '+')
        nb = my_strlcat(nb, str, 1);
    else
        nb = my_strcat(nb, str);
    return (nb);
}