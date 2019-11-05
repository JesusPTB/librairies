/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** [file description here]
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    if (n == 0)
        return (0);
    for (n; n > 0; n--) {
        if (*s1 != *s2 && *s1 > *s2)
            return (1);
        else if (*s1 != *s2 && *s1 > *s2)
            return (-1);
        if (*s1++ == 0)
            return (0);
        s2 = s2 + 1;
    }
    return (0);
}