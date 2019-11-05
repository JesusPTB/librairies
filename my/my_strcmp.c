/*
** EPITECH PROJECT, 2019
** My_str_cmp
** File description:
** [file description here]
*/

int my_strcmp(const char *s1, const char *s2)
{
    if (*s1 != *s2) {
        if (*s1 > *s2)
            return (1);
        else
            return (-1);
    }
    return (0);
}