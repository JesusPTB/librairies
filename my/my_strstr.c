/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** [file description here]
*/

#include <stddef.h>

int my_strncmp(const char *s1, const char *s2, int n);

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_strncmp(to_find, &str[i], my_strlen(to_find)) == 0) {
            return (&str[i]);
        }
    }
    return NULL;
}